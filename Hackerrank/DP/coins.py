coin_list = []
coins = [x for x in (input().split(','))]
for i in coins:
	coin_list.append(i)
N = int(input())

min_ele = []
min_ele.append(0)
for a in range(0,N):
	min_ele.append(9999)

min_ele[0] = 0

j = 1
v = 0
for i in range(1,N+1):
	for v in range(0,len(coin_list)):
		if (int(coin_list[v]) <= i) and (((int(min_ele[i - int(coin_list[v])]) + 1) < int(min_ele[i]) )):
			min_ele[i] = int(min_ele[i-int(coin_list[v])])+1

solutions = 0
print(min_ele)
for z in range(0,N+1):
	if min_ele[i] != 0 :
		solutions += 1

print(solutions)
