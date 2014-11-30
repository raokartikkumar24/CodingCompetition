
#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
void lcs( vector<int> X, vector<int> Y, int m, int n )
{

  vector<vector<int>> L(m+1,vector<int>(n+1));

 
   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
 

   int index = L[m][n];
    int len = index;
   int *lcs = new int[index+1];
   
  
   int i = m, j = n;
   while (i > 0 && j > 0)
   {
      if (X[i-1] == Y[j-1])
      {
          lcs[index-1] = X[i-1]; 
          i--; j--; index--;     
      }
 
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
 
    
    for(int k = 0 ; k < len ; k++)
        cout<<lcs[k]<<" ";
    cout<<endl;
}
 
int main()
{
 
  int m,n;
  cin>>m>>n;
  std::vector<int> X(m);
  std::vector<int> Y(n);

  for(int i = 0 ; i < m ; i++)
    cin>>X[i];

  for(int i = 0 ; i < n; i++)
    cin>>Y[i];

  lcs(X,Y,m,n);


  return 0;
}
