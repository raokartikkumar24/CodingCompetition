N = (int)(input())
mod = 10**10
prod = 0
for i in range(1,N+1):
	temp = i
	for j in range(1,i):
		temp *=i
		temp %= mod
	prod += temp
	prod %= mod
print(prod)




