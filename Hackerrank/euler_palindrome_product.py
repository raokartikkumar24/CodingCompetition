def ispalin(n):
	strr = str(n)
	strrev = strr[::-1]

	return strrev == strr



T = int(input())
while T > 0:
	summ = 0
	maxx = 0
	N = int(input())

	largestPalin = 0
	a = 999
	b = 0
	db = 0
	while a >= 100:
		if a%11 == 0:
			b = 999
			db = 1
		else:
			b = 990
			db = 11

		while b >= a:
			if a*b <= largestPalin:
				break
			if ispalin(a*b) and a*b <= N:
				largestPalin = a*b

			b = b - db
		a = a -1

	print(largestPalin)

	T -= 1