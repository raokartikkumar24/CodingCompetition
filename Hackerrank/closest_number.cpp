#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	
	int N;
	cin>>N;
	vector<int> numbers(N);

	for(int i = 0 ; i < N ;++i)
		cin>>numbers[i];

	sort(numbers.begin(), numbers.end());


	int mini = 0;
	int idx = 0,jdx = N-1;
	int tempval;
	for(;;)
	{
		mini = max(abs(numbers[jdx]-numbers[idx]),mini);
		idx++;
		jdx--;
		if( idx >= jdx)
			break;
	}

	cout<<mini<<endl;

	return 0;



}