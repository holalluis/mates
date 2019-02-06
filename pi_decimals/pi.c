#include<stdio.h>
#include<math.h>

//metode 1
long double metode1(){
  unsigned long long n=1e8; //iteracions
  unsigned long long i=0;   //comptador
  long double pi=0;         //aproximació de pi
  for(i=0; i<=n; i++){
    pi += 4*pow(-1,i)/(2*i+1);
    if( i % 100000 == 0){
      printf("%llu - %Lf\n",i,pi);
    }
  }
  return pi;
}

//factorial de n
unsigned long long factorial(unsigned long long n){
  if(n==0) return 1;
  return n*factorial(n-1);
}

//terme suma infinita metode 2
long double terme_suma(unsigned long long k){
  return factorial(4*k)*(1103 + 26390*k)/(pow(factorial(k),4)*pow(396,4*k));
}

//metode 2: Srinivasa Ramanujan (1910) (wikipedia)
long double metode2(){
  unsigned long long n  = 100;              //iteracions
  long double        a  = 9801/(2*sqrt(2)); //terme constant
  long double        s  = 0;                //suma infinita
  long double        pi = 0;                //pi = a / suma

  unsigned long long i=0;
  for(i=0; i<=n; i++){
    s += terme_suma(i);
    if( i % 10 == 0){
      pi = a/s;
      printf("%llu - %.100Lf\n",i,pi);
    }
  }
  return pi;
  //3.1415926535 89793238462643383279 5028841971 6939937510 58209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253
  //3.1415926535 89793099518090446764 5177646772 9359865188 59863281250000000000000000000000000000000000000000
}

int main(){
  metode2();
  return 0;
}

