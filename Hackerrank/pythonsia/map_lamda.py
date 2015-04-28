N = int(input())
lis = []


a = 0
b = 1
lis.append(0)
lis.append(1)

for i in range(2,N):
	c = a + b;
	lis.append(c)
	a = b
	b = c
print(list(map(lambda x : x*x*x,lis)))