#include <iostream>
#include <vector>
typedef long long LL;
using namespace std;

int main()
{
	
	LL r,c;
	cin>>r>>c;
	

	LL mul = r/2;

	if( r%2 == 0)
		mul -= 1;

	LL row = (r%2 == 0)?(mul = (mul*10)+1) : (mul = mul*10); 

	for(LL i = 1 ; i < c ;i++)
		row += 2;

	cout<<row<<endl;

	return 0;
}