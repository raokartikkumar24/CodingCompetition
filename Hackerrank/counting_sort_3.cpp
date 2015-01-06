#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    int N;
    cin>>N;
    vector<int> numbers(N);

    for(int i = 0 ; i < N; i++)
    {

      string input;
      int e;
      cin>>e>>input;
      numbers[i] = e;
    }

    int K = 100;
    vector<int> count(K+1);

    //Frequency of numbers
    for(int i = 0 ; i < N ;i++)
        count[numbers[i]]++;

    //Cumulative sum
    for(int i = 1 ; i < K ; i++)
      count[i] += count[i-1];

      for(int i = 0 ; i < K ; i++)
         cout<<count[i]<<" ";

      cout<<endl;



    return 0;

}
