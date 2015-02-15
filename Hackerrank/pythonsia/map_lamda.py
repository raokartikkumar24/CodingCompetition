N = int(input())
lis = []

lis.append(0)
lis.append(1)

for i in range(2,N):
	lis.append(lis[i-1] + lis[i-2])
print(list(map(lambda x : x*x*x,lis)))