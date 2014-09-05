#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include<fstream>
using namespace std;

typedef long long L;
L Number = 1000000;
L fib[1000000];


bool isfibo(int N)
{
    L i = 0;
    for(;i<=N;i++)
    {
        if( fib[i] == N)
            return true;
    }
    return false;
}

void calculateFib()
{
	ofstream obj;
	obj.open("fibonac.txt");
    fib[0] = 0;
    fib[1] = 1;
    for(L i = 2 ; i <= Number ; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
		obj<<fib[i]<<endl;
    }
}


int main() {
    
    calculateFib();
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
