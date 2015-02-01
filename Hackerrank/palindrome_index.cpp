#include <iostream>
#include <string>
//#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while( T-- ) {
	string str1,str2;
	cin>>str1;
	str2 = str1;
	reverse(str1.begin(),str1.end());
	if(str1 == str2)
		cout<<-1<<endl;

	else
	{

		string sub = str2.substr(1,str2.length());
		string sub2 = str2.substr(0,str2.length()-1);
		string rev = sub;
		string rev2 = sub2;
		reverse(sub.begin(),sub.end());
		reverse(sub2.begin(),sub2.end());
		if( sub == rev)
			cout<<0<<endl;
		else if( rev2 == sub2 )
			cout<<str2.length()-1<<endl;

		else
		{

			int i = 0;
			int j = str2.length()-1;
			while( str2[i] - str2[j] == 0 && (i < str2.length() && j >= 0))
			{

				i++;
				j--;
			}
			int ipos = i;
			int jpos = j;
			if(str2[i+1]-str2[j] == 0)
				cout<<i<<endl;
				
			else
				cout<<j<<endl;
				
		}

		
	}

}

	return 0;
}