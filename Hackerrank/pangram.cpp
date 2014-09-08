#include<iostream>
#include<string>
#include<locale>

using namespace std;

int main()
{
	int alpha[26] = {0};
	string s;
	getline(cin,s);
	locale loc;
	for(int i = 0 ; i < s.length(); i++)
	{
		if( s[i] != ' ')
		{
			alpha[tolower(s[i],loc)-'a']++;
		
		}
	}
	int p = 1;
	for(int i = 0 ; i < 26; i++)
	{
		p *= alpha[i];
	}
	
	if( p )
		cout<<"pangram"<<endl;
	else
		cout<<"not pangram"<<endl;
		
	return 0;

}