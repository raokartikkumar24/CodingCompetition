M = int(input())
setM = set()
lisM = [int(x) for x in input().split()]


for i in lisM:
	setM.add(i)

N = int(input())
setN = set()
lisN = [int(x) for x in input().split()]

for i in lisN:
	setN.add(i)

diff1 = set()
diff2 = set()
diff1 = setM.difference(setN) #exists in M and not N
diff2 = setN.difference(setM)

unionset = diff1.union(diff2)


li = []



for i in unionset:
	li.append(i)


li.sort()

for i in li:
	print(i)


