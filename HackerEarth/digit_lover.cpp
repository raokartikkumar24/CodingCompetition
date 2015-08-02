#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while( T -- ) {
	string s1,s2;
	cin >> s1 >> s2;

	int len_s1 = s1.length();
	int len_s2 = s2.length();

	if( s1.length() == s2.length() )
	{
			for(int i = 0 ; i < s1.length(); ++i)
			{
				int sum = (s1[i]-'0') + (s2[i]-'0');
				cout << sum;
			}
			cout << endl;

	}

	else
	{
			bool b_s1 = s1.length()>s2.length()?true:false;

			if( b_s1 )
			{
				//s2 is smaller legnth
				for(int i = 0 ; i < (len_s1-len_s2); ++i )
					s2 = s2+'0';
				//cout << (len_s1-len_s2) << s2 << endl;
			}
			else
			{
				for(int i = 0 ; i < (len_s2-len_s1); ++i )
					s1 = s1+'0';
			}



			for(int i = 0 ; i < max(len_s1,len_s2); ++i)
			{
				int sum = (s1[i]-'0') + (s2[i]-'0');
				cout << sum;
			}
			cout << endl;
			}
	}

	return 0;
}