#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string s,t;
	cin>>s;
	cin>>t;

	string s2;
	s2 = s;

	bool found = false;

	for (int i = s2.length()-1; i >= 0; i--)
	{
		if( s2[i] == 'z')
			s2[i] = 'a';
		else
			s2[i] = s2[i]++;


		if( (s2 < t)  && (s2 > s))
		{
			found = true;
			break;
		}

			
	}



	if(!found)
		cout<<"No such string"<<endl;
	else
		cout<<s2<<endl;


	return 0;
}