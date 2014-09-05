#include<iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long number,three,five;
    cin>>number;
	cin>>three>>five;
    long  i =1;
    
     for( ; i <=number ; i++ )
     {
          if( i % 3 == 0 )
          {
               if( i % 5 == 0 )
                  cout<<"FizzBuzz"<<endl;
               else
                   cout<<"Fizz"<<endl;
         }
          
         else if( i % 5 == 0 )
              cout<<"Buzz"<<endl;
         else
            cout<<i<<endl;
    }
	
	return 0;

}