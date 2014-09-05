#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
		string input;
		cin>>input;
		
		int sum = 0;
		int len = input.length();
		for(int i = 0 ;i < len/2 ;i++)
		{
			sum+=abs(input[i] - input[len-i-1]);	
			
		}
		
		cout<<sum<<endl;
	
	}

}