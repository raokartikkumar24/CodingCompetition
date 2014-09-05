#include<iostream>
#include<vector>
using namespace std;
typedef long long int LL;


int main()
{

	
	int t;
    cin>>t;
    while( t-- )
    {
		
           LL N;
           cin>>N;
           vector<LL> array(N);
           for(LL i = 0 ; i < N ;i++) 
               cin>>array[i];
           int XORval = 0;
        
		if( N%2 == 0 ) cout<<0<<endl;
		
		else {
		 
		for(LL i = 0; i < N ; i++ )
		{
			if( i%2 == 0 )
				XORval ^= array[i];
			
		
		}
		
		cout<<XORval<<endl;
		
	}
        
    }
		

}