#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

	int alpha[26] = {0};
	
	string s1,s2;
	cin>>s1;
	cin>>s2;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	int c = 0;
	for(int i = 0; i < s1.length(); i++)
	{
		if( (s1[i]-s2[i] ) == 0 ) c++;
	
	}
	
	cout<<c<<endl;
	

}