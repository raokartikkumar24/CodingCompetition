T = int(input())
modval = 10**9+7
while T > 0:
	N = int(input())
	#array = []
	array = [int(x) for x in input().split()]
	
	limit = pow(2,N-1,modval)
	answer = 0
	for i in range(0,N):
		answer = answer | array[i]
	
	mainanwser = (limit*answer%modval)
	print(mainanwser)
		
		