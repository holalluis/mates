phi=(1+sqrt(5))/2;      %nombre àuric
gcf;hold on;            %get current figure
axis([-0.5 0.5 0 0.8]); %set axis

%comptador iteracions
iteracions=0;

%tamany array de cada iteracio
tamany=50000;

for den=3.9395:0.000002:4
  %mostra iteracio actual
  disp([iteracions,den]);

  %buida array
  arr=zeros(1,tamany); 

  %primer numero
  arr(1)=1/den+i/den; 

  %omple array
  for j=2:tamany 
    arr(j) = arr(j-1)^phi + arr(1); 
  end;
  
  %cla; %clear
  plot(real(arr),imag(arr),'.');

  %print([num2str(imatge),'.png']);
  iteracions++;
end
