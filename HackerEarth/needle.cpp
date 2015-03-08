#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int T;
	cin>>T;
	while( T-- )
	{

		int pat[26] = {0};
		int text[26] = {0};

		string pattern;
		cin>>pattern;

		string textString;
		cin>>textString;


		for(int i = 0; i < pattern.length(); i++)
			pat[pattern[i]-'a']++;

		for(int i = 0; i < textString.length(); i++)
			text[textString[i]-'a']++;


		int count = 0;
		for(int i = 0 ; i < 26; i++)
		{
				if( (pat[i] > 0) && (pat[i] <= text[i]) )
					count = count + pat[i];

		}

		for(int i = 0 ; i < 26; i++)
			cout<<pat[i]<<" ";
		cout<<endl;

		for(int i = 0 ; i < 26; i++)
			cout<<text[i]<<" ";

		cout<<endl;


		if( count == pattern.length())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}



	return 0;
}
