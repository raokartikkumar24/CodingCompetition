#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{

  long T;
  cin>>T;
  while( T-- ) {
  long N;
  cin>>N;


  vector<long> array(1000000);

  for(long i = 1 ; i < N+1 ;i++)
  {
    long val;
    cin>>val;
    array[val]++;

  }



  vector<long> numbers;
  for(long i = 1 ; i < array.size() ;i++)
  {
      if( array[i] > 1)
      numbers.push_back(array[i]);
  }


long long int sum = 0;
  for(long i = 0 ; i < numbers.size() ; i++)
  {

     sum += (long long int)pow(numbers[i],2)-numbers[i];

  }

  cout<<sum<<endl;


}

  return 0;
}
