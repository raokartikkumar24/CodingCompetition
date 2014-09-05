store = {}
max = 10**9
for i in range(1,max):
	store[(i*(i+1))/2] = i

	
t= (int)(input())
while t != 0:
	num = (int)(input())
	if store[num] == 0:
		print("Better Luck Next Time")
	else:
		print("Go On Bob %" %store[num])
	t-=1
