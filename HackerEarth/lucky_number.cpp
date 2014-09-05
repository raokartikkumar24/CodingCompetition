#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    
    while( t-- )
    {
    	int array[10] = {0};
    	string number;
    	cin>>number;
    	for(int i = 0 ; i < number.length(); i++)
    	{
    		array[number[i]-'0']++;
    	}
    	int sum=0;
    	for(int i = 0 ; i< 10; i++)
		{
			sum+=(i*array[i]);
		}
		
		cout<<sum<<endl;
    }
   
    return 0;
}
