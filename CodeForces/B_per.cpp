#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long LL;
int main()
{
	
	LL n,m;
	cin>>n>>m;
	vector<LL> perr(n);
	
	for(LL i = 1 ; i <= n ;i++)
		perr[i-1] = i;
	

    bool p = false;
    LL j = 1;
    do
    {
    	
    	if( j == m) {
    	for(LL i = 0 ; i < n ; i++ )
    		cout<<perr[i]<<" ";}

    	j++;

    }while(p = next_permutation(perr.begin(),perr.end()));

	return 0;

}
