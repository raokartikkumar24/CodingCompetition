#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

void print(long p[],long n)
{
	for(long i = 0; i < n; i++)
		cout<<p[i]<<" ";
	cout<<endl;

}
int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
		long num,k;
		cin>>num>>k;
		vector<long> vec(num);
		vector<long> array(num);
			
		for(long i = 0 ; i < num ;i++) 
			vec[i] = i; 
			
		
		long times = num;
		long pos = 0;
		while(times--)
		{
			
			std::reverse(&vec[pos], &vec[num]);
			array[vec[pos]] = pos;
			
			pos++;
			
				
		}
		cout<<array[k]<<endl;
			
	
		
		
	}
	return 0;
}