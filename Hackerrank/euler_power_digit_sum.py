T = int(input())
while T > 0:
	N = int(input())
	val = pow(2,N)
	strr = str(val)
	ssumm = 0
	for s in strr:
		ssumm += int(s)
	print(ssumm)
	T -= 1