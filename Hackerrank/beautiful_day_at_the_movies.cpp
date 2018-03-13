#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;


bool getAbsDifference(int number,int k) {
	int reverse = 0;
	int n = number;
	int len = 0;
	while(n > 0) {
		n = n/10;		
		len++;
	}

	n = number;

	while( n > 0 ) {
		int power = pow(10,len-1);
		reverse = reverse + (power*(n%10));
		n = n/10;
		len--;
	}

	return (abs(reverse-number)%k == 0 ? true : false);

}

int main() {

	int i, j , k;
	cin >> i >> j >> k;
	long long count = 0;
	for(int idx = i ;  idx <= j; idx++) {
	if(getAbsDifference(idx,k)) {
		count++;
		} 	
	}
	cout << count << "\n";

	return 0;


}
