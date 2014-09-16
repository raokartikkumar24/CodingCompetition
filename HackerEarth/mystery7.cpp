#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<char,int> phone;
	phone['a'] = 2;phone['b'] = 2;phone['c'] = 2;
	phone['d'] = 3;phone['e'] = 3;phone['f'] = 3;
	phone['g'] = 4;phone['h'] = 4;phone['i'] = 4;
	phone['j'] = 5;phone['k'] = 5;phone['l'] = 5;
	phone['m'] = 6;phone['n'] = 6;phone['o'] = 6;
	phone['p'] = 7;phone['q'] = 7;phone['r'] = 7;phone['s'] = 7;
	phone['t'] = 8;phone['u'] = 8;phone['v'] = 8;
	phone['w'] = 9;phone['x'] = 9;phone['y'] = 9;phone['z'] = 9;
	int t;
	cin>>t;
	while( t-- )
	{
	
		string input;
		cin>>input;
		string output = "";
		for(int i = 0 ; i < input.length(); i++)
		{
			output += phone[input[i]];
		
		}
		cout<<output<<endl;
		
	
	}

	return 0;
}
