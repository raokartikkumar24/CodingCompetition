#include<iostream>
#include<string>
using namespace std;

int main()
{
	int testcases;
	cin>>testcases;
	
	while( testcases -- )
	{
		int alpha[26] = {0};
		string input;
		cin>>input;
		
		for(int i = 0 ; i < input.length(); i++)
			alpha[input[i] - 'a']++;
		
		
		int sum = 0;
		for(int i=0 ; i<26 ; i++)
		{
			sum = sum + (alpha[i]%2);
		}

		if(sum>=2)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		
	
	}
	
	return 0;

}