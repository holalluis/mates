#include <stdio.h>
#include <stdlib.h>

//funció que comprova si el nombre n és primer o no
bool esPrimer(int n, int n_primers[], int *comptador);

//calcula quin es el nombre primer numero argv[1]
int main(int argc, char **argv)
{
	if (argc<2)
	{
		printf("Us: algorimte2 [nombre primer numero n]\n");
		return 1;
	}
	//quantitat de nombres primers que volem trobar
	int limit = atoi(argv[1]);
	//quants nombre primers tenim (estat)
	int comptador=0;
	//array on anirem guardant els nombres primers que anem trobant
	int n_primers[limit];
	//numero que provem inicialment
	int n=1;
	//el comptador anirà augmentant. Quan sigui igual al limit, surt del programa
	while(comptador<limit)
	{
		if(esPrimer(n, n_primers, &comptador))
		{
			//descomentar la linia següent per veure com va treballant el programa
			//printf("%d ",n);
		}
		n++;
	}
	//printf("\n");
	//mostra el n primer numero argv[1] (hi ha un -1 perque comencem a comptar pel 0)
	printf("%d\n",n_primers[comptador-1]);
	return 0;
}

//comprova si "n" es primer o no. Li passem a l'entrada el vector de nombres primers trobats i el punter a la variable comptador
bool esPrimer(int n, int n_primers[], int *comptador)
{
	if (n<4)
	{
		n_primers[*comptador]=n;
		*comptador=(*comptador)+1;
		return true;
	}
	if (n%2==0) return false;
	//la clau està aqui: si el numero que estem provant es pot dividir per algun dels nombres primers que ja hem trobat, és que no és primer
	for(int i=1;i<*comptador;i++)
	{
		if (n % n_primers[i] == 0)
			return false;
	}
	//si supera el bucle, és primer, per tant afegeix-lo a la llista de nombres primers
	n_primers[*comptador]=n;
	*comptador=(*comptador)+1; //no tinc clar si fent (*c)++ funcionaria bé o augmentaria el valor del punter
	return true;
}

