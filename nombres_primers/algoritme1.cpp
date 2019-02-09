#include <stdio.h>
#include <stdlib.h>

//funció que comprova si el nombre n és primer o no
bool esPrimer(int n);

//calcula quin es el nombre primer numero argv[1]
int main(int argc, char **argv)
{
	if (argc<2)
	{
		printf("Us: algorimte1 [nombre primer numero n]\n");
		return 1;
	}
	//quantitat de nombres primers que volem trobar
	int limit = atoi(argv[1]);
	//quants nombre primers tenim (estat)
	int comptador_de_nombres_primers=0;
	//primer nombre que provem
	int n=1;
	//comencem el bucle incrementant i de 1 en 1
	while(true)
	{
		//si el nombre i es primer imprimeix-lo
		if(esPrimer(n)) 
		{
			//printf("%d ",i);
			comptador_de_nombres_primers++;
		}
		if(comptador_de_nombres_primers>=limit) 
		{
			printf("%d\n",i);
			break;
		}
		n++;
	}
	return 0;
}

//funcio "pura": retorna true o false si "n" es primer o no
bool esPrimer(int n)
{
	//consideracions inicials (si es negatiu o parell o mes petit de 4)
	if(n<=0)return false;
	if(n<4)return true;
	if(n%2==0)return false;
	//bucle que només comprova nombres imparells
	//és poc eficient perquè va dividint tots els nombres fins a n i comprovant si el residu == 0
	//a l'algoritme2 es millora aquesta part
	for(int i=3;i<n;i+=2)
	{
		if (n % i == 0) return false;
	}
	//si supera el bucle es primer
	return true;
}
