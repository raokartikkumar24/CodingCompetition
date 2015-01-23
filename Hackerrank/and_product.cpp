#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    while(T--)
        {
        LL a,b;
        cin>>a>>b;



        if( a == b )
            cout<<0<<endl;
        else {

        LL start = min(a,b);
        LL end = max(a,b);
        LL andsum = start ;
        for( LL i = start+1 ; i <= end; i++ )
        {
            andsum &= i;
          }
        cout<<andsum<<endl;
        }
    }
    return 0;
}
