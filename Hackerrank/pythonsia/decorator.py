def decorate(s):
	def add_91():
		return '+91' + ' ' + s[0:5] + ' ' + s[5:len(s)]
	return add_91


if __name__ == "__main__":
	N = int(input())
	l = []
	while N > 0:
		n = input()
		l.append(n[len(n)-10:len(n)])
		N -= 1
	l.sort()
	for i in l:
		w = decorate(i)
		print(w())
