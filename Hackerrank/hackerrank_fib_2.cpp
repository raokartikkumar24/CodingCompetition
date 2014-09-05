#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long L;
//L Number = 10000;
//L fib[100000];


bool isfibo(int N)
{
    if( N == 0) return true;
    L i = 0;
    L a =0 , b = 1 ,c;
    
    for(;i<=N;)
    {
        c = a + b;
        a = b;
        b = c;
        if( c == N) return true;
        else i++;
    }
    return false;
}



int main() {
    
   // calculateFib();
    long T;
    cin>>T;
    L NN;
    while( T--)
    {
        cin>>NN;
        if( isfibo(NN))
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }
    
    return 0;
}
