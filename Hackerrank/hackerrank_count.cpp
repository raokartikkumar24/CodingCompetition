#include<iostream>
#include<map>

using namespace std;

int main()
{
	int count[100] = {0};
	
	long N = 10;
	int number;
	
	while( N-- )
	{
		cin>>number;
		count[number]++;
	
	}
	
	for(int i = 0 ; i < 100 ; i++ )
		cout<<count[i]<<" ";
		
	//cout<<endl;
	
	return 0;

}
