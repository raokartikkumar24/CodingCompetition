org = input()
s_str = input()
c = 0
i = 0
for _ in range(len(org)):
	loc = org.find(s_str,i,len(org))
	if loc != -1:
		c += 1
		i = loc+1
print(c)