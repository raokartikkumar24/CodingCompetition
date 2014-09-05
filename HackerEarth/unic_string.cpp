#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while ( t-- )
	{
	string input;
	cin>>input;
	map<char,int> mapstr;
	map<int,char> secstr;
	for(int i = 0 ; i < input.length(); i++)
	{
		mapstr.insert(pair<char,int>(input[i],i));
		
		
	}
	
	map<char,int>::iterator it = mapstr.begin();
	for(;  it != mapstr.end(); it++)
	{
		secstr.insert(pair<int,char>( it->second, it->first));
			
	}
	
	map<int,char>::iterator it2 = secstr.begin();
	for(;  it2 != secstr.end(); it2++)
		cout<<it2->second;
	cout<<endl;
	}
return 0;
}

