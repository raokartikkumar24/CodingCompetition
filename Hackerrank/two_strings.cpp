#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int T;
	cin>>T;

	while( T-- )
	{
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;

	int s1_a[26] = {0};
	int s2_a[26] = {0};

	for(int i = 0 ;  i < s1.length(); i++)
		s1_a[s1[i]-'a'] = 1;

	for(int i = 0 ; i < s2.length(); i++)
		s2_a[s2[i]-'a'] = 1;



	bool p = false;
	for(int i = 0 ; i < 26; i++)
	{
		if(s1_a[i] == s2_a[i] && (s1_a[i]*s2_a[i] > 0))
		{
			p = true;
			break;
		}
	}


	if(p) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
	return 0;
}