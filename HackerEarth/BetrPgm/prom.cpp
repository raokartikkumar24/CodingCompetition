#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

  int T;
  cin>>T;
  while( T-- )
  {
    int M,N;
    cin>>M>>N;
    vector<int> boys(M);
    vector<int> girls(N);

    for(int i = 0 ; i < M ; i++)
    {
      int b;
      cin>>b;
      boys[i] = b;
    }

    for(int i = 0 ; i < N ; i++)
    {
      int b;
      cin>>b;
      girls[i] = b;
    }


    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());

    bool result = false;
    for(int i = 0 ; i < M ;i++)
    {
      if( boys[i] > girls[i]) {
          result = true;
        }
    }

    if(result) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



  }

  return 0;

}
