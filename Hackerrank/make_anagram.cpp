#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1,s2;
  cin>>s1;
  cin>>s2;

  long array1[26] = {0};
  long array2[26] = {0};


  for(long i = 0 ; i < s1.length(); i++)
    array1[s1[i]-'a']++;

  for(long i = 0 ; i < s2.length(); i++)
      array2[s2[i]-'a']++;



  long result = 0;

  for(long i = 0 ; i < 26; i++)
      result += abs(array1[i] - array2[i]);

  cout<<result<<endl;

  return 0;

}
