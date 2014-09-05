#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	
	vector<int> numL;
   int t;
   cin>>t;
   while( t-- )
   {
   		long N;
   		cin>>N;
		int nums[10]={0};
   		long *array = new long[N];
   		for(int i = 0; i < N ;i++)
   			cin>>array[i];
   		
   		for(int i = 0 ; i < N ; i++)
		{	
			//cout<<'0'<<endl;
   			nums[array[i]]++;
		}
		
		cout<<endl;
		for(int i = 0 ; i < 10 ; i++)
   			cout<<nums[i]<<" ";
		cout<<endl;
		sort(nums,nums+10);
		
		for(int i = 0 ; i < 10 ; i++)
   			cout<<nums[i]<<" ";
		
		cout<<endl;
		
		
		int max = 0;
		int j = 0;
		for(int i = 10 ; i >=0 ; i--)
		{
			j++;
			if( nums[i] != 0 )
			{
				if( nums[i] >= max )
				{
					max = nums[i];
					numL.push_back(10-i);
				}
			}
			
		}

		for(int i = 0 ; i < numL.size(); i++)
			cout<<numL[i]<<" ";			
		cout<<endl;
   }
   
   return 0;
}
