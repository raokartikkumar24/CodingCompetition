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
      int N,K;
      cin>>N>>K;
      vector<int> weights(N+1);
      vector<int> V(K+1);


      for(int i = 0 ; i < K+1 ; i++)
        V[i] = i;

      for(int i = 1 ; i < N+1 ; i++)
      {
          int w;
          cin>>w;
          weights[i] = w;

      }

      for(int i = 0 ; i < weights.size();i++)
        cout<<weights[i]<<" ";

      cout<<endl;

      vector<vector<int> > M(N+1, vector<int>(K+1));


      for(int i = 0 ; i <= K ; i++)
        M[0][i] = 0;


      for(int i = 0 ; i <= N ;i++)
      {
          for(int w = 0 ; w <= K ; w++)
          {

            if( i== 0 || w==0)
               M[i][w] = 0;

            else  if( w < weights[i] )
                M[i][w] = M[i-1][w];
             else
               M[i][w] = max(M[i-1][w], V[i-1]+M[i-1][w-weights[i-1]]);

          }

      }


      for(int i = 1 ; i <= N ;i++)
      {
        for(int w = 1 ; w <= K ; w++)
        {
              cout<<M[i][w]<<" ";
        }
        cout<<endl;

      }
      cout<<M[N][K];

      cout<<endl;

  }

  return 0;
}
