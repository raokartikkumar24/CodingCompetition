from math import sqrt
N = int(input())
divs = 0
for i in range(1,N+1):
	if N%i == 0:
		divs +=1
print(divs)