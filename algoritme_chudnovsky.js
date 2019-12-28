/*
 * algoritme chudnovsky per calcular el número pi
 * 1/π = 2*√2/9801 * ∑(0,infinity)((4k)!(1103+26390k)/(k!)^4 * (396)^(4k))
 */

function factorial(n){
  if(n==0||n==1) return 1;
  else return n*factorial(n-1);
}

let cnt = 2*Math.sqrt(2)/9801;
let sum = 0;
let n   = 30; //nombre d'iteracions
let pi  = 0;

for(let k=0;k<n;k++){
  sum += factorial(4*k)*(1103+26390*k)/(Math.pow(factorial(k),4)*Math.pow(396,4*k));
  pi = 1/(cnt*sum);
  console.log({k, pi});
}
