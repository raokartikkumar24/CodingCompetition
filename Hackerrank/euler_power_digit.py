N = int(input())
for val in range(1,15):
	p = pow(val,N)
	if N == len(str(p)):
		print(p)


