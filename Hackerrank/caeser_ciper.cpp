#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	int length;
	cin >> length;
	
	string input;
	cin >> input;

	int k;
	cin >> k;
	for(int i = 0 ; i < input.length() ; i++)
	{
		if( isalpha(input[i]))
		{
			if(input[i] == 'Y' || input[i] == 'y' || input[i] == 'Z' || input[i] == 'z')
				input[i] = input[i]-(26-k);
			else
			{
				input[i] = input[i] + (k%26);

			}
		}		
	}

	
	cout << input << endl; 

	return 0;
}