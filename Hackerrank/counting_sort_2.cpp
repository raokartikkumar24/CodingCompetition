#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int N;
    cin>>N;
    vector<int> numbers(N);

    for(int i = 0 ; i < N; i++)
    {
      int e;
      cin>>e;
      numbers[i] = e;
    }

    int maxe = *max_element(numbers.begin(),numbers.end());



    int K = maxe;
    vector<int> count(K+1);

    //Frequency of numbers
    for(int i = 0 ; i < N ;i++)
        count[numbers[i]]++;



    //Cumulative sum
    for(int i = 1 ; i <= K ; i++)
      count[i] += count[i-1];

    vector<int> sortedList(N);


    //Put the elements in the correct position.
    for(int i = N-1 ; i >=0 ; i--)
    {
      sortedList[count[numbers[i]] - 1] = numbers[i];
      count[numbers[i]] -= 1;
    }

    for(int i = 0 ; i < N ;i++)
      numbers[i] = sortedList[i];

      for(int i = 0 ; i < N ;i++)
        cout<<numbers[i]<<" ";

    return 0;

}
