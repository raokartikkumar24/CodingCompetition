#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

  int n;
  cin>>n;

  vector<vector<char>> cavityMap(n, vector<char>(n));

  for(int i = 0 ; i < n ; i++)
  {
    string in;
    cin>>in;
    for(int j = 0 ; j < n ; j++)
    {

       cavityMap[i][j] = in[j];
    }
  }


  for(int i = 1 ; i < n-1 ; i++)
  {
    for(int j = 1 ; j < n-1; j++)
    {
      if(cavityMap[i][j]>cavityMap[i-1][j] && cavityMap[i][j]>cavityMap[i+1][j]
         && cavityMap[i][j]>cavityMap[i][j-1] && cavityMap[i][j]>cavityMap[i][j+1]){
        cavityMap[i][j]='X';
      }

    }
  }


 
    for(int i = 0 ; i < n ; i++)
    {
      for(int j = 0 ; j < n; j++)
      {
          cout<<cavityMap[i][j];
      }
      cout<<endl;

    }




  return 0;
}
