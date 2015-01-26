#include <iostream>
#define MOD 100005
using namespace std;


int main()
{

  int T;
  cin>>T;

  while(T--)
  {
      int N;
      cin>>N;

      cout<<((int)pow(2,N)-1)%MOD<<endl;
    

  }

  return 0;
}
