#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

  int T;
  cin>>T;

  while( T-- ) {

  int N;
  cin>>N;

  if( N % 3 == 0 )
  {
        for(int i = 0 ; i < N ;i++)
          cout<<5;
        cout<<endl;

  }

  else if ( N % 5 == 0 )
  {

    for(int i = 0 ; i < N ;i++)
      cout<<3;
    cout<<endl;

  }

  else if ( (N - 3) % 5 == 0)
  {
      int re = N-3;
      for(int i = 0 ; i < N-3 ;i++)
        cout<<5;
      for(int i = 0 ; i < N-re ;i++)
        cout<<3;
      cout<<endl;

  	}


    else if ( (N - 5) % 3 == 0)
    {
        int re = N-5;
        for(int i = 0 ; i < N-5 ;i++)
          cout<<5;
        for(int i = 0 ; i < N-re ;i++)
          cout<<3;
        cout<<endl;

      }

      else
        cout<<-1<<endl;

      }
  return 0;
}
