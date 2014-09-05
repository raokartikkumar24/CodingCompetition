#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{

	long n;
	cin>>n;
	vector<string> lists(n+1);
	long j = 1;
	while( n-- )
	{
		
		string input;
		cin>>input;
		lists[j] = input;
		j++;
	}
	
	long Q;
	cin>>Q;
	while( Q-- )
	{
		long L,R;
		string substri;
		cin>>L>>R>>substri;
		long sum = 0;
		for(long i = L ; i <= R ; i++)
		{
			size_t found = lists[i].find(substri);
			//cout<<"Found : "<<found<<endl;
			if ( found != std::string::npos)
				sum++;
			
		}
		
		cout<<sum<<endl;
	
	}

return 0;
}
