#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	

	string number;
	cin>>number;

	int position = -1;

	for(int i = number.length()-1; i >= 0; i--)
	{

			if((number[i] -'0')%2 == 0)
			{
				if(number[i] < number[number.length()-1])
					position = i;
			}

	}

	if(position == -1)
	{

		for(int i = 0 ; i < number.length()-1; i++)
		{

				if((number[i]-'0')%2 == 0 )
				{
					if(number[i] > number[number.length()-1])
						position = i;
				}

		}

	}

	if(position == -1)
		cout<<-1<<endl;
	else
	{
		swap(number[position],number[number.length()-1]);
		cout<<number<<endl;
	}
	

	return 0;
}