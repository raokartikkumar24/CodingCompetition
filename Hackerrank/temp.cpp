#include<iostream>
using namespace std;

typedef long long LL;

int main()
{

	LL number = 1000000;
	 
	int sequenceLength = 0;
	int startingNumber = 0;
	long sequence;
	 
	LL cache[number+1];
	//Initialise cache
	for (int i = 0; i < number; i++) 
		cache[i] = -1;
	
	cache[1] = 1;
	 
	for (int i = 2; i <= number; i++) {
		sequence = i;
		int k = 0;
		while (sequence != 1 && sequence >= i) {
			k++;
			if ((sequence % 2) == 0) {
				sequence = sequence / 2;
			} else {
				sequence = sequence * 3 + 1;
			}
		}
		
		cache[i] = k + cache[sequence];
	 
		
		if (cache[i] > sequenceLength) {
			sequenceLength = cache[i];
			startingNumber = i;
		}
	}

	return 0;
}