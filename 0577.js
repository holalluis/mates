
//number 0.577 | https://www.youtube.com/watch?v=4k1jegU4Wb4
function gamma(n){
  let g=0;
  for(let i=1;i<=n;i++){
    g+=1/i;
    if(i%1e8==0) console.log({i,g:g-Math.log(i)});
  }
  g-=Math.log(n);
  return g;
}

let g=gamma(Number.MAX_VALUE);
