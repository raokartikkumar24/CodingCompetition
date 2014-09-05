#include <iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int *bin1 = new int[s1.length()];
	int *bin2 = new int[s2.length()];
	int i,j;
	for( i = 0;  i < s1.length(); i++ )
	{
		bin1[i] = s1[i]-'0';
		bin2[i] = s2[i]-'0';
	}
	
	int *result = new int[s1.length()];
	for(int p = 0 ; p < s1.length(); p++)
	{
		result[p] = s1[p]^s2[p];
		cout<<result[p];
	}
	cout<<endl;
	
    
    return 0;
}
