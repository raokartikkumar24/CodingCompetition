#include <iostream>
#include <vector>
typedef long long LL;
using namespace std;

int main()
{

	LL N,P,X;

	cin >> N >> P >> X;

	vector<LL> numbers;

	for(LL i = 0 ; i < N; i++)
	{
		LL n;
		cin >> n;
		numbers.push_back(n);

	}


	LL index = 0;
	LL _max  = 0;
	for(LL i = 0 ; i < N ; i++, P -= X)
	{
		//cout <<"P : "<<P<<" "<<(numbers[i]*P)<<endl;
		if( (numbers[i]*P) > _max)
		{
			index = i+1;
			_max = numbers[i]*P;
		}

	}

	cout << index << endl;
	return 0;
}