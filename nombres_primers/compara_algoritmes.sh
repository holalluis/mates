#!/bin/bash

#fem servir la comanda "time" 
#comparem quan tarden els 2 algoritmes que calculen els 50000 primers nombres primers
time ./algoritme1 50000
time ./algoritme2 50000

# Resultat
#	algoritme1:
#	611951
#	
#	real	0m52.855s
#	user	0m52.682s
#	sys	0m0.094s
#
#	algoritme2:
#	611951
#	
#	real	0m13.257s
#	user	0m13.196s
#	sys	0m0.027s

################################################
# CONCLUSIÓ L'ALGORITME 2 ÉS MOLT MÉS EFICIENT #
################################################

