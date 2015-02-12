import re
N = int(input())

while N > 0:
	NN = input()	
	match = re.search(r'[7-9]{1}\d{9}',NN)
	if match and len(NN) == 10:
		print("YES")
	else:
		print("NO")
	N -= 1