#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
		bool found = false;
		bool per= false;
		string w;
		cin>>w;
		string org = w;
		do
		{
			
			if( w > org )
			{	
				cout<<w<<endl;
				found = true;
				break;
			
			}
			
		}while( per = next_permutation(w.begin(),w.end()));
		
		if( !per && !found)
		{
			cout<<"no answer"<<endl;
		}
	}
	
	return 0;

}