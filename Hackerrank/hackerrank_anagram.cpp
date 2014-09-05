#include<iostream>
#include<string>
using namespace std;

int main()
{
        int t;
        cin>>t;
        while( t-- )
        {
            string input;
            cin>>input;
            int l = input.length();
            int i;
            int alpha[26] = {0};
            
			//if length of the string is odd then we cannot make 2 strings anagram to each other
            if( input.length() % 2 != 0)
                cout<<-1<<endl;
            else
            {
				//first string
                for( i = 0 ; i < l/2 ;i++)
                    alpha[input[i]-'a']++;
                //second string
                for(i = l/2 ; i < l; i++)
                    alpha[input[i]-'a']--;
                
                int sum = 0;
                for(int j = 0 ; j < 26; j++)
                    {
                    sum += abs(alpha[j]-0);
                }
                
                cout<<sum/2<<endl;
                
            }
           
            
        }
    
}
