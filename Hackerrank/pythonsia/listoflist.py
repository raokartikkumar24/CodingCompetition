N = int(input())
students = []
while N > 0:
	l = []
	name = input()
	m = float(input())
	l.append(name)
	l.append(m)
	students.append(l)
	N -= 1

mm = students[0][1]
names = []
for i in range(len(students)):
	if students[i][1] <= mm:
		mm = students[i][1] 
		names.append(students[i][0])
#print(students)
names.sort()
for n in names:
	print(n)
#print(names)
