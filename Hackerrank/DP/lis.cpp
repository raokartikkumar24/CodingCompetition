#include <iostream>
#include <vector>

using namespace std;


int main()
{

  long N;
  cin>>N;


  long *array = new long[N];
  vector<long> lis(N);
  for(long i = 0 ; i < N ; i++)
    cin>>array[i];

    lis[0] = 1;
  //  lis[1] = 1;

    for(long i = 1 ; i < N ; i++)
    {
      for(long j = 0 ; j < i ; j++)
      {
        if( array[i] > array[j] && (lis[i] < lis[j] + 1))
          lis[i] = lis[j] + 1 ;
        }
      }

      /*  for(int i = 0 ; i < N ; i++)
      cout<<lis[i]<<" ";

      cout<<endl;*/

      cout<<lis[N-1]<<endl;


      return 0;
    }
