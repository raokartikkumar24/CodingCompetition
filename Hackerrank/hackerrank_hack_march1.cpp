#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

typedef long long LL;
using namespace std;

bool is_perfect_square(LL n) {
    if (n < 0)
        return false;
    LL root(round(sqrt(n)));
    return n == root * root;
}

bool isperfectsquare(LL N)
{
    LL h = N & 0xF;
    if( h > 9) return false;
    
    if (h != 2 && h != 3 && h != 5 && h != 6 && h != 7 && h != 8)
    {
        LL t = (LL) floor( sqrt((double) N) + 0.5 );
        return t*t == N;
    }
    return false;
}

int count(LL n1, LL n2 )
{
	LL i = n1 ;
  	long countN = 0;
  	for(; i <= n2 ; i++)
      {
      	if( is_perfect_square(i)) countN++;
      
    }
  return countN;
  
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc;
    cin>>tc;
  	while( tc-- )
    {
    	LL num1, num2;
      	cin>>num1>>num2;
      	cout<<count(num1,num2)<<endl;
    }
    return 0;
}
