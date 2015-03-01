#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	
	int T;
	cin>>T;

	while( T-- ) {

	string str;
	cin>>str;


	int i = 0;
	int j = str.length()-1;

	while( abs(str[i]-str[i+1]) == abs(str[j]-str[j-1]) && i != j )
	{
		i++;
		j--;
	}

	if( i < str.length()/2)
	 cout<<"Not Funny"<<endl;
	else
		cout<<"Funny"<<endl;
}

	return 0;


}