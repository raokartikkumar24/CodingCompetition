#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	int N;
	cin>>N;
	while( N-- )
	{
		string input;
		cin>>input;
		regex pattern ("^[A-Z]{5}[0-9]{4}[A-Z]{1}$");//PAN Card format
		//				 5chars  4Nums   1char
		bool valid = regex_search(input,pattern);

		if(valid) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}