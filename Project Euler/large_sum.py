sum = 0
with open("large_sum.txt") as f:
	content = f.read().splitlines()
l = len(content)
for j in range(0,l):
	sum = sum+int((content[j]))
print(sum)