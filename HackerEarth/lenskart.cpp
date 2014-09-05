#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int N,val;
    	cin>>N;
    	int *array = new int[N];
    	if( N == 1)
    	{
    		cin>>val;
    		cout<<val<<endl;
    	}
    		

    	else
    	{
    			for(int i = 0 ; i < N ; i++)
    				cin>>val;
    			cout<<0<<endl;		
    	}
    	
    	
    	
    }
    
    return 0;
}
