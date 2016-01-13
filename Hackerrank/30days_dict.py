N = int(input())
m = N;
phonebook = {}
while N > 0:
	nam = raw_input()
	numb = int(input())
	phonebook[nam] = numb;
	N = N-1

while m > 0:
	query = raw_input()
	if query in phonebook:
		print(str(query) + "=" +str(phonebook[query]))
	else:
		print("Not found")
	m = m-1
	