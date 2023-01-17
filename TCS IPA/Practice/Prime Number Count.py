import math
import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")

primes = {}


n = int(input())
mx = int(1e3)
sieve = [1]*(mx)

sieve[0] = 0
sieve[1] = 0
for i in range(2, mx):
    if(sieve[i]):
        for j in range(i*2, mx, i):
            sieve[j] = 0
for i in range(2, mx):
    if(sieve[i]):
        primes[i] = 1
cn = 0
for i in range(n):
    if(primes.get(int(input()), -1) != -1):
        cn += 1

print(cn)
