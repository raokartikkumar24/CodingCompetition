#include <cmath>
#include <tgmath.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long L;
using namespace std;

 

void checkforfibo(L n)
{

    L d1 = (5 * pow(n,2))+4;
    L d2 = (5 * pow(n,2))-4;
    
     if( (fmod( sqrt(d1), 1) == 0) || (fmod( sqrt(d2), 1) == 0))
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
