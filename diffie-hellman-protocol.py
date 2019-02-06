'''
	The Diffie-Hellman protocol (due to Whitfield Diffie and 
	Martin Hellman) is a key-agreement protocol between two 
	parts without previous contact, using an unsafe channel and 
	without authentication.

	http://dmoral.es/blog/beauty-of-diffie-hellman-protocol
'''
import math

p=97 #prime number PUBLIC
g=5  #random number PUBLIC (usually between 2 and 5)

#ALICE
a=29 #random a<p PRIVATE KEY
A=(math.pow(g,a)%p) #PUBLIC KEY
print "A :",A,"(public)" #Alice sends A to Bob

#BOB
b=47 #random b<p PRIVATE KEY
B=(math.pow(g,b)%p) #PUBLIC KEY
print "B :",B,"(public)" #Bob sends B to Alice

#end:
K=(math.pow(B,a)%p) #ALICE COMPUTES K (PRIVATE)
J=(math.pow(A,b)%p) #BOB   COMPUTES J (PRIVATE)
#K and J are equal: shared and symmetric private key
print "K :",K,"(private)"
print "J :",J,"(private)"
