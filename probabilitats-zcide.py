def prob(daus,cares):
	print(str(daus)+' daus, '+str(cares)+' cares:');
	favorables=cares*daus;
	possibles=6*daus;
	z=float(favorables)/float(possibles)*float(daus);
	print('  Valor esperat: '+str(favorables)+'/6 = '+str(z)+' zombies morts');
	return z;

prob(2,3);
prob(3,2);
prob(4,3);
prob(5,3);
prob(4,4);
