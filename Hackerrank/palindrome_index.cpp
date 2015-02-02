#include <iostream>
#include <string>
#include <algorithm>

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

			int i = 0;
			int j = str2.length()-1;
			while( str2[i] == str2[j]  && (i < str2.length() && j >= 0))
			{

				i++;
				j--;
			}

			if( str2[i] == str2[j-1])
			{

				if(str2[i+1] == str2[j-2])
					cout<<j<<endl;
				else
					cout<<i<<endl;

			}
			else
				cout<<i<<endl;
		
	}

}

	return 0;
}