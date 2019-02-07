# spigot algorithm to compute decimals of pi in hexadecimal
# https://www.youtube.com/watch?v=K305Vu7hFg0

def spigot(n):
  p = 0
  for k in range(n):
    p += (1/pow(16,k))*( 4/(8*k+1) - 2/(8*k+4) - 1/(8*k+5) - 1/(8*k+6) )
  return p

print(spigot(100))
print(spigot(1000))
print(spigot(10000))
