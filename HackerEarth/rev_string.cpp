#include<iostream>cd
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> str;
	string input;
	getline(cin,input);
	int len = input.length();
	
	for(int i = 0 ; i < len ; )
	{
		string temp;
		while( input[i] != ' ')
		{
			temp+=input[i];
			i++;
		}
		cout<<temp;
		
	}

	return 0;
}