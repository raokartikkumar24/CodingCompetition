N = (int)(input())
mod = 10**10
prod = 0
for i in range(1,N+1):
	prod += i**i
strr = str(prod)
str2 = strr[-10:]
if str2[0] == '0':
	print(strr[-9:])
else:
	print(strr[-10:])




