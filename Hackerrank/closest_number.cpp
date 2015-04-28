#include <iostream>
#include <vector>
#include <algorithm>
typedef long long LL;
using namespace std;

int main()
{
	
	LL N;
	cin>>N;
	vector<LL> numbers(N);

	for(LL i = 0 ; i < N ;++i)
	{
		LL n;
		cin>>n;
		numbers.push_back(n);
	}

	sort(numbers.begin(), numbers.end());

	LL minn ;
	for (LL i = 0; i < numbers.size(); ++i)
	{
		minn = min(minn,abs(numbers[i] - numbers[i+1]));
		cout<<abs(numbers[i] - numbers[i+1])<<" "<<numbers[i]<<" "<<numbers[i-1]<<endl;
	}
	

	return 0;



}