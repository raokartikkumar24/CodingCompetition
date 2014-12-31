dashes = [6,2,5,5,4,5,6,3,7,6]
instr = input()
s = 0
for i in range(0,len(instr)):
	s = s + dashes[int(instr[i])]
print(s)
