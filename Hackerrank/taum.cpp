#include <iostream>
#include <vector>
#include <algorithm>
typedef long long LL;
using namespace std;
int main()
{
  int T;
  cin>>T;
  while( T-- )
  {
     LL B,W;
     LL X,Y,Z;
     cin>>B>>W;
     cin>>X>>Y>>Z;

     vector<LL> values;
     values.push_back(B*X + W*Y );
     values.push_back(B*X + W*Z + W*X);
     values.push_back(B*Z + W*Y + B*Y);
     LL val = *min_element(values.begin(), values.end() );
     cout<<val<<endl;
  }

  return 0;

}
