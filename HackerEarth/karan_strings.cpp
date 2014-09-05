#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while( t-- )
    {
    	string input,result;
    	cin>>input;
    	int i=0;
    	int p = 0;
    	for(; i < input.length();)
    	{
    		int j = i+1;
    		while( input[i] == input[j])
    		{
    			
    			j++;
    		}
			result+=input[i];
    		i = j;
    	}
    	
    	cout<<result<<endl;
    	
    }
    return 0;
}
