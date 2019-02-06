

//metode 1
(function main(){
  return
  function aprox(k){return Math.pow(-1,k)/(2*k+1);}
  let pi=0;
  let i=0;
  while(true){
    pi += aprox(i);
    if(i%1e8==0) console.log({pi:4*pi,i});
    i++;
  }
})();

//metode 2: Srinivasa Ramanujan (1910) (wikipedia)
(function main(){
  function factorial(n){ if(n==0) return 1; return n*factorial(n-1); }
  function aprox(k){ return factorial(4*k)*(1103 + 26390*k)/(Math.pow(factorial(k),4)*Math.pow(396,4*k)); }

  const a = 9801/(2*Math.sqrt(2));
  let suma=0;
  // pi = a / suma

  let i=0;
  while(i<15){
    suma += aprox(i);
    console.log({pi:a/suma,i});
    i++;
  }
  console.log(Math.PI)
})();
