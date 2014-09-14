#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int LL;

int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
		LL n;
		cin>>n;
		vector<LL> pos(n);
		vector<LL> holes(n);
		
		for(LL i = 0 ; i < n ; i++)
			cin>>pos[i];
		
		for(LL i = 0 ; i < n ; i++)
			cin>>holes[i];
			
		sort(pos.begin(),pos.end());
		sort(holes.begin(),holes.end());
			
		
		LL mintime = 0;
		for(LL i = 0 ; i < n ; i++)
		{
				mintime = max(mintime,abs(pos[i]-holes[i]));
		
		}
		
		cout<<mintime<<endl;
	
	}

}