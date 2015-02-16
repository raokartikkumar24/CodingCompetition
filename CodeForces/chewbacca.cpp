#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
typedef long long LL;

using namespace std;

int main()
{
	
	string number;
	cin>>number;

	vector<LL> num;

	LL len = number.length();

	for(LL i = 0 ; i < len ;i++)
		num.push_back(number[i]-'0');

	LL i = 0;
	if(num[0] == 9) i++;

	for(; i < num.size(); i++)
	{
		if(num[i] > 4 )
		{
			num[i] = 9-num[i];
		}
	}

	for(LL i = 0 ; i < len ;i++)
	{
		if(num[0] != 0)
			cout<<num[i];
	}
		

	return 0;

}