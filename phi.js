

function iteration(i){
  if(i>100)return 1;
  return 1+1/iteration(i+1);
}

console.log(iteration(0));
