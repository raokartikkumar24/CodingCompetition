from math import factorial

N = (int)(raw_input())

fact = str(factorial(N))

zeros = 0
i = len(fact)-1

while fact[i] == '0':
	zeros+=1
	i-=1
print zeros
	