#include <iostream>
#include <map>

using namespace std;

int main()
{
	
	map<long,long> levels;

	for(long i = 1 ;i < 10004; i++)
	{
		long summ = (i*(i+1))/2;
		levels.insert(pair<long,long>(i,summ));
	}

	long n;
	cin>>n;

	if( n == 1)
		cout<<1<<endl;

	else {

	long j = 1;
	long anothersum = 0;
	while( anothersum <= n)
	{
		anothersum += levels[j];
		cout<<anothersum<<" ";
		j++;
	}

	cout<<endl;
	cout<<j-2<<endl;
}
	return 0;



}