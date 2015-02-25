from math import factorial
mod = 10**9+7
T = int(input())
while T > 0:
	N,M = [int(x) for x in input().split()]
	a = N+M
	print((factorial(a)//(factorial(a-M)*factorial(M)))%mod)
	T -= 1
