A,B = [int(x) for x in input().split()]
strr = input()
pos = 0
ans = 0
for i in strr:
	if int(i) != 0:
		ans += pow(A,pow(2,pos),B)
	pos = pos + 1

print(ans)
print(ans%B)
