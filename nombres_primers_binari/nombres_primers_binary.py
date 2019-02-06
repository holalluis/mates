'''
	imprimir els N primers nombres primers en binari
	buscar algun patro?
'''

from math import sqrt, log; 
from itertools import count, islice
import sys

print sys.argv

#N es el nombre de primers que volem trobar
if len(sys.argv)>1:
	N = int(sys.argv[1])
else:
	N = 100

#maxim de caracters que te el nombre que volem
aprox_primer = int(N*log(N))
Max_chars=len(bin(aprox_primer)[2:])+1
Primers_trobats=0

print "Aproximacio del primer num ",N,":",aprox_primer

#comprova si el nombre n es primer
def isPrime(n):
	return n > 1 and all(n%i for i in islice(count(2), int(sqrt(n)-1)))

#verbose version 
def isPrime_v(n):
	#1. comprova si es primer
	is_prime=isPrime(n);

	#si no es primer, acaba
	if not is_prime: return

	#2. com que es primer, suma 1 als primers_trobats
	global Primers_trobats
	Primers_trobats += 1

	#3. genera un string i treu '0b' inicial
	binari_string=bin(n)[2:]

	#4. afegeix 0 a l'esquerra
	while len(binari_string)<Max_chars:
		binari_string="0"+binari_string

	#5. substitueix zeros i mostra el resultat
	print "[",binari_string.replace('0',' ').replace('1','1'),"] | ",str(n)," | P("+str(Primers_trobats)+")"

#main
i=1
while(Primers_trobats<N):
	isPrime_v(i);
	i+=1

