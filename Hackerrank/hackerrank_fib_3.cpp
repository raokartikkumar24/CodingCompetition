#include <cmath>
#include <tgmath.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long L;
using namespace std;

bool isperfectsquare(L N)
{
    L h = N & 0xF;
    if( h > 9) return false;
    
    if (h != 2 && h != 3 && h != 5 && h != 6 && h != 7 && h != 8)
    {
        L t = (L) floor( sqrt((double) N) + 0.5 );
        return t*t == N;
    }
    return false;
}

void checkforfibo(L n)
{

    L d1 = (5 * pow(n,2))+4;
    L d2 = (5 * pow(n,2))-4;
    
    if (isperfectsquare(d1)  || isperfectsquare(d2))
        cout<<"IsFibo"<<endl;
    else cout<<"IsNotFibo"<<endl;
    
}

int main() {
    long T;
    cin>>T;
    L NN;
    while( T--)
    {
        cin>>NN;
        checkforfibo(NN);
    }
    
    return 0;
}
