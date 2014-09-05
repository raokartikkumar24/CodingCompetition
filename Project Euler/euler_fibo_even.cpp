#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long L;
//L Number = 10000;
//L fib[100000];


void isfibo(int N)
{
    
    L i = 0;
    L a =0 , b = 1 ,c;
    L eventSum = 0;
   // while( ( a + b ) < N )
   for(;i<N;)
    {
        c = a + b;
        a = b;
        b = c;
       if( (c%2) == 0 ) eventSum +=c;
        i++;
    }
    
	
	cout<<endl<<eventSum<<endl;
}



int main() {
    
   // calculateFib();
    //long T;
   // cin>>T;
    L NN = 4000000;
    
    isfibo(NN);
	
	cout<<endl;
    return 0;
}
