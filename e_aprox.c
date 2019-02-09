#include<stdio.h>
#include<math.h>

int main(){
  double x = 1000000000;
  double e = pow(1 + 1/x, x);

  printf("e ≈ %.30lf\n",e);
  printf("e ≈ %.30lf\n",M_E);
  return 0;
}

