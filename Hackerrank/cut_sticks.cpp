#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
  int N;
  cin>>N;

  
  vector<int> array(1001);

  for(int i = 1 ; i < N+1 ;i++)
  {
    int val;
    cin>>val;
    array[val]++;

  }



  vector<int> numbers;
  for(int i = 1 ; i < array.size() ;i++)
  {
      if( array[i] > 0)
      numbers.push_back(array[i]);
  }

  for(int i = 0 ; i < numbers.size() ; i++)
  {

     int sum = 0;
     for(int j = i ; j < numbers.size(); j++)
        sum += numbers[j];
      cout<<sum<<endl;

  }

  cout<<endl;


  return 0;
}
