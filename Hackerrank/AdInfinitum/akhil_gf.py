t = (int)(input())

while t != 0 :
	N,M = [int(x) for x in input().split()]
	sum = 0
	count = 0
	while count != N:
		sum+=10**count
		count+=1
	print(sum)
	print(sum%M)
	t-=1
	