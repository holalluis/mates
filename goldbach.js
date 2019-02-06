//Verifica que 'a' es primo
function esprimo(a){
  var i=2; //'i' es un indice
  while(a%i!=0)
    i++;
  if(i==a)
    return true;
  else
    return false;
}

(function main(){
  var nCombos=0;
  for (var i=2; i<50; i++) { // Para combinaciones desde 2*2=4 hasta 50*2=100
    for (var j=0; j+1<i; j++) { // Nota: j+1 para evitar caso j=1. No se considera al numero 1 primo.
      var r=i+j, s=i-j; // Se determina que la suma de 'r' y 's' es igual al numero par
      if((esprimo(r)) && (esprimo(s)))
        nCombos++;
        console.log("  Para el número: "+2*i+" = "+r+" + "+s);
    }
    console.log("Numero: "+2*i+" | Combos: "+nCombos);
  }
})();

