#include <iostream>
#include <vector>

typedef long long LL;
using namespace std;

int main()
{
	LL array[100001] = {0};
	
	array[0] = 1;
	
	LL i;
	LL counter = 2;
	for(i = 1 ; i < 100001 ; i += 2)
	{
		array[i] =  array[i-1]+ counter;
		array[i+1] = array[i] + counter;
		counter++;
	}
	
	int t;
	cin >> t;
	
	cout << array[t-1] << endl;
		
	
	
	return 0;
}