#include<iostream>
using namespace std;

int main()
{
	
		int n,m;
		cin>>n>>m;
		int val = n;
		int choc;
		int t;
		if( m > val )
			choc = val;
		else {
			
			int ch = val/m;
			int wra = val%m;
			val += ch;
			while( (ch+wra) >= m )
			{
				val += (ch+wra)/m;
				t =  (ch+wra)%m;
				ch = (ch+wra)/m;
				wra = t;
			
			}
			
			choc = val;
		}
		cout<<choc<<endl;
	
	
	
	return 0;
	
	

}