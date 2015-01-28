#include <iostream>
typedef long long LL;

using namespace std;

int main()
{

  int T;
  cin>>T;

  while(T--)
  {

    LL N;
    cin>>N;


    if( N%2 != 0 )
      cout<<2<<endl;
    else
    {
       if( N%4 == 0)
         cout<<3<<endl;
       else
         cout<<4<<endl;
    }


  }

  return 0;
}
