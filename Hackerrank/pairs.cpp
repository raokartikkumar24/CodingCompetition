#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

typedef long long int LL;


//
//This will only give one pair with diff as k
//
/*void Onlyonepair()
{
	LL n,k;
	cin>>n>>k;
	vector<LL> array(n);
	
	for(long a = 0 ; a < n ;a++)
		cin>>array[a];
	
	
	sort(array.begin(),array.end());
	
	long i = 0;
	long j = n-1;
	long count = 0;
	while( i < j )
	{
		if( abs(array[i] - array[j]) == k )
		{
			count++;i++;j--;
		}
		else if ( abs(array[i]- array[j]) < k )
			i++;
		else if( abs(array[i]- array[j]) > k )
			j--;
	
	}
	cout<<count<<endl;
	

}
*/
int main()
{
	int n,k;
	cin>>n>>k;
	set<int> array;
	int ele;
	for(int i = 0 ; i < n ;i++)
	{	
		cin>>ele;
		array.insert(ele);
	
	}
		
	long count = 0;
	
	set<int>::iterator it = array.begin();
	for(; it != array.end(); it++)
	{
			if( array.find(*it+k) != array.end())
				count++;
	}
	cout<<count<<endl;
	
	
	return 0;
	
}