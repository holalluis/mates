function prestec(n,t,i){
  //inputs:
  //  n = euros que et donen
  //  t = anys
  //  i = interes tae

  //itera any per any acumulat 
  let m = 0; //euros totals a tornar
  for(let j=0;j<t;j++) { m = (m + n/t)*(1+i) }

  //cost total del prestec
  let euros_cost_prestec = m - n;

  //euros/mes a tornar
  let euros_cada_mes = m/(t*12);

  return { euros_tornar:m, euros_cost_prestec, euros_cada_mes };
}

console.log(prestec(15000, 5, 0.0395));
console.log(prestec(15300, 5, 0.0395));
