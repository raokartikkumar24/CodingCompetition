#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>


using namespace std;

int main()
{

  int T;
  cin>>T;
  while( T-- ) {
  int N;
  cin>>N;
  vector<int> numbers(N);

  for(int i = 0 ; i < N ;i++)
  {

    int n;
    cin>>n;
    numbers[i] = n;

  }


  bool f = false;
  for(int i = 1 ; i < N ; i++)
  {

      int sumrange1 = accumulate(numbers.begin(),numbers.begin()+i-1,0);
      int sumrange2 = accumulate(numbers.begin()+i,numbers.end(),0);

      if( sumrange1 == sumrange2)
      {
        f = true;
        break;
      }

  }


  if(!f) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;

}

  return 0;
}
