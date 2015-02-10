N = int(input())
marks = N
temp = []
students = {}
while N > 0:
	temp = [ x for x in input().split()]
	sum = 0
	for mar in range(1,marks+1):
		sum += int(temp[mar])
	students[temp[0]] = sum/marks
	N -= 1

name = input()
print("%.2f" %students[name])