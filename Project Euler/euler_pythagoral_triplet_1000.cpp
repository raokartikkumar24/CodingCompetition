#include<iostream>
#include<fstream>
using namespace std;

int main()
{

		ofstream ostr( "pytriplet.txt" );
		long a,b,c;
		long m =2, n;
		
		long prod = 1;
		
		for( m=2; m < 1000; m++)
		{
			n = m+1;
		
			a = (n*n) - (m*m);
			b = 2*m*n;
			c = (n*n) + (m*m);
			if( ( (a*a) + (b*b) ) == c*c )
				ostr<<a<<" "<<b<<" "<<c<<" "<<a+b+c<<endl;
			if( a+b+c == 1000 ) 
			{
				prod = a*b*c;
				break;
				
			}
	}
	
	cout<<prod<<endl;
	
	ostr.close();
			
	return 0;
		
		

}