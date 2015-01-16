#include <iostream>
#include <string>

using namespace std;

int main()
{
  int T;
  cin>>T;
  while( T-- )
  {

    string input;
    int alpha[26] = {0};

    cin>>input;

    for(int i = 0 ; i < input.length(); i++)
    {

        alpha[input[i] - 'A']++;

    }

    long count = 0;
    if(input[input.length()-1] == 'K')
    {
       count += alpha[10] + alpha[17]-1;
    }
    else
    {
      count += alpha[10] + alpha[17];
    }


    cout<<count<<endl;
 }

  return 0;

}
