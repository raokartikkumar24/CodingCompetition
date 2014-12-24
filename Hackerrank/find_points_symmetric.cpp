#include<iostream>

using namespace std;

int main()
{
	
	int T;
	cin>>T;
	while( T--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<(2*x2)-x1<<(2*y2)-y1<<endl;
	}

	return 0;

}