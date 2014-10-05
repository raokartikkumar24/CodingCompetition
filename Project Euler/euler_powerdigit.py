#f = open('powerdigit.txt','w+')
import time
#N = int(input())
maxsum = 0
tstart = time.time()
for i in range(90,101):
	for j in  range(90,101):
		val = str(i**j)
		sum = 0
		for v in val:
			sum += int(v)
		if maxsum < sum:
			maxsum = sum
		#f.write(str(sum))
		#f.write("\n")
print(maxsum)	
print("Time taken : " + str( time.time()-tstart))	
		