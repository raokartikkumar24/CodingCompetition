
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {


	int t;
	cin>>t;
	while( t-- )
	{
		int alpha[26] = {0};
		int alpha2[26] ={0};
		string b;
		cin>>b;
		string w;
		cin>>w;
		
		for(int i = 0 ; i < b.length(); i++)
			alpha[b[i]-'a'] = 1;
	
		int count =0;
		for(int i = 0 ; i < w.length(); i++)
			alpha2[w[i]-'a'] = 1;
			
		
		
		 for(int i = 0 ; i < 26 ; i++)
         {
            if( alpha[i] & alpha2[i] == 1)
                   count++;
        }
		
		cout<<count<<endl;
    
   
	}
	 return 0;
}