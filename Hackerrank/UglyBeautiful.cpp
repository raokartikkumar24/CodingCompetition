#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int Q;
	cin >> Q;
	while(Q--)
	{
		vector<long> arrays;
		set<long> setArray;		
		long n;
		cin >> n;
		long number = n;
		bool ugly = false;
		while(number--)
		{
			int n1;
		cin >> n1;
			if(n1 > n)
			{	
				ugly = true;
				//break;		
			}
			else
			{
				ugly = false;
				arrays.push_back(n1);
				setArray.insert(n1);
			}
		
		}
		if(!ugly) {
		if(setArray.size() != n )
		{
			ugly = true;	
		}
		else
		{
			for(int i = 0 ; i < arrays.size()-1; i++)
			{	
				if((arrays[i] - arrays[i+1]) == -1)
				{	
				
					if(i+1 == arrays.size()-1) {
						ugly= true;
						break;
					}
				}
				else
				{
					ugly = false;break;
				}	
			}
		}
		
		}
		if(ugly) cout << "Ugly \n";
		else cout << "Beautiful \n";
	
	}


	return 0;
}
