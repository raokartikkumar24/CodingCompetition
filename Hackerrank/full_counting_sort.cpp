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
    vector<string> str(N);
    for(int i = 0 ; i < N; i++)
    {
      string input;
      int e;
      cin>>e>>input;
      numbers[i] = e;
      str[i] = input;
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

    vector<string> sortedString(N);
    //Put the elements in the correct position.
    for(int i = N-1 ; i >=0 ; i--)
    {
      sortedList[count[numbers[i]] - 1] = numbers[i];
      if( i < 10)
        sortedString[count[numbers[i]]-1] = "-";
      else
        sortedString[count[numbers[i]]-1] = str[i];
      count[numbers[i]] -= 1;
    }

    for(int i = 0 ; i < N ;i++) {
      numbers[i] = sortedList[i];
      str[i] = sortedString[i];

    }

      for(int i = 0 ; i < N ;i++)
        cout<<str[i]<<" ";

    return 0;

}
