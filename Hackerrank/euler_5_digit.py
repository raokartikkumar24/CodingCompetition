N = int(input())
a = 50
b = 999

if N == 4:
	a = 1111
	b = 9999
elif N == 5:
	a = 1111
	b = 200000
elif N == 6:
	a = 99999
	b = 999999
else:
  a = 50
  b = 999



bigsum = 0
for i in range(a, b+1):
	l = map(int,list(str(i)))
	su = 0
	for j in l:
		su = su + pow(j,N)
	if su == i:
		print(i)
		bigsum = bigsum + i
print("sum",bigsum)



