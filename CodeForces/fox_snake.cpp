#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	int n,m;
	cin>>n>>m;
	bool first = true;
	for(int i = 0 ; i < n ; i++)
	{
		
		if( i%2 == 0)
		{

			for(int j = 0 ; j < m ; j++)
			 cout<<"#";
			cout<<endl;
		}
		else
		{
			
			if(first)
			{
				for(int j = 0 ; j < m-1 ; j++)
			 		cout<<".";
			 	cout<<"#"<<endl;
			 	first = false;

			}
			else
			{
				cout<<"#";
				for(int j = 0 ; j < m-1 ; j++)
			 		cout<<".";
			 	cout<<endl;
			 	first = true;
			}

		}

	}


	return 0;


}