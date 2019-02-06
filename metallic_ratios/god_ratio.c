#include <stdio.h>
#include <math.h>

double predicted_ratio(double n){
  return (1+sqrt(1+4*n*n))/(2.0*n);
}

double nbonacci(int x, double N){
  //compute first x Nbonacci numbers where:
  //P[n] = N*P[n-1] + P[n-2]
  //and compute ratio = P[n]/P[n-1]
  double a=0;      //first
  double b=1;      //second
  double n;        //next
  double ratio=0;  //n/b
  if(x<2){return b;}
  for(int i=2;i<x;i++){
    n = b/N + a;
    ratio = n/b;
    //update a and b
    a=b;
    b=n;
  }
  printf("ratio(x=%d, N=%lf) = %.10lf | predicted = %.10lf\n",x,N,ratio, predicted_ratio(N));
  return ratio;
}

int main(){
  double ratio = 0;

  for(double i=1;i<1;i+=0.1){
    ratio = predicted_ratio(i);
    printf("ratio(%lf) = %lf\n",i,ratio);
  }

  double famous[] = {
    1,
    1.202056903159594,      //aperys constant
    1.41421356237,          //√2
    1.6180339887498948,     //phi
    2.6854520010653,        //K0 | https://www.youtube.com/watch?v=VDD6FDhKCYA
    2.71828182845904523536, //e
    3.14159265358979323846, //pi
  };
  for(int i=0;i<6;i++){
    printf("ratio(%lf) = %lf\n",famous[i],predicted_ratio(famous[i]));
  }

  return 0;
}
