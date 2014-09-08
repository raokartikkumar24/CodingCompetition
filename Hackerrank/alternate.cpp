
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while( t-- )
	{
		string str;
		cin>>str;
		int count = 0;
		vector<int> nums;
		for(int i = 0 ; i < str.length(); )
		{
			int j = i+1;
			
				while( str[i] == str[j]  && j < str.length())
				{
					count++;
					j++;
					if( j >= str.length()) break;
				}
				if( count == 0)
					i++;
				else
				{
					i = i + count;
					nums.push_back(count);
					count = 0;
				}
		}
		
		int sum = 0;
		for(int i = 0 ; i < nums.size(); i++)
			sum+=nums[i];

		cout<<sum<<endl;
	
	}
	
	return 0;

}