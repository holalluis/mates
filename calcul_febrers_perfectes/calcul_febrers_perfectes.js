let inici = 2021;
let anys  = 200;

for(let i=0;i<anys;i++){
  let any  = inici+i;
  let data = new Date(any, 1, 1, 1, 0, 0); //1 de febrer
  if(any%4!=0 && data.getDay()==1){
    console.log(`# ${data}`);
    console.log(`ncal -M feb ${any}`);
  }
}
