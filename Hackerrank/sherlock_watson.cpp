#include <iostream>
#include <vector>

using namespace std;

int main()
{

  long N,K,Q;
  cin>>N>>K>>Q;

  long *array = new long[N];

  for(long i = 0 ; i < N ; i++)
    cin>>array[i];

  vector<long> rotatedPosition(N);

  for(long i = 0 ; i < N ;i++)
    rotatedPosition[(i+K)%N] = array[i];


  while( Q-- )
  {
    long x;
    cin>>x;
    cout<<rotatedPosition[x]<<endl;

  }


  //for(long i = 0 ; i < N ; i++)
    //cout<<rotatedPosition[i]<<" ";

  cout<<endl;

  return 0;
}
