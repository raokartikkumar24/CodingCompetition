def rotate(n,K):
	for i in range(1,n/K):
		prod = 0
		for j in range(0,K):
			prod ^=(i<<j)
			if prod == n:
				return (bin(i)[2:])
				
	
		

		
if __name__ == "__main__":
	N,K = [int(x) for x in input().split()]
	t =input()
	num = int(t,2)
	#print(num)
	print(rotate(num,K))


