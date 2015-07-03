#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N ;
	vector<int> even;
	vector<int> odd;

	long sumEven = 0;
	long sumOdd = 0;
	for(int i = 0 ; i < N ; i++)
	{
		int n;
		cin >> n;
		if( n % 2 == 0 )
		{
			 even.push_back(n);
			 sumEven += n;
		}
		else 
		 {
		 	odd.push_back(n);
		 	sumOdd += n;

		 }
	}

	sort(even.begin(),even.end());
	sort(odd.begin(),odd.end());

	for(int i = 0 ; i < even.size(); ++i)
		cout << even[i] << " ";
	cout << sumEven << " ";

	for(int i = 0 ; i < odd.size(); ++i)
		cout << odd[i] << " ";
	cout << sumOdd << "\n";

	return 0;
}