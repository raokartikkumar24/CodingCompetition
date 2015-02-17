from operator import itemgetter
def decorator(l):
	def addSalutation():
		if l[3] == 'M':
			return 'Mr. ' + l[0] + ' ' + l[1]
		else:
			return 'Ms. ' + l[0] + ' ' + l[1]
	return addSalutation



N = int(input())
biglist = []
while N > 0:
	lis = [(x) for x in input().split()]
	biglist.append(lis)
	N -= 1
biglist.sort(key=itemgetter(2))

for li in biglist:
	newlist = decorator(li)
	print(newlist())

