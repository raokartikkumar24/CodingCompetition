
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string str;
	getline(cin, str);
	int alpha[26] = { 0 };
	string blue = "BLUE";
	

	for (int i = 0; i < str.length(); ++i)
	{

		alpha[1] = 1; alpha[4] = 1; alpha[11] = 1; alpha[20] = 1;

		string substr = "";
		int j = i;
		while (str[j] != ' ' && j < str.length())
			substr += str[j++];
		
		if ((substr[0] == 'B' || substr[0] == 'E' || substr[0] == 'L' || substr[0] == 'U') && substr.length() == 4 )
		{
			for (int j2 = 0; j2 < substr.length(); ++j2)
				alpha[substr[j2] - 'A'] = 0;

			int sum = 0;
			for (int j1 = 0; j1 < 26; ++j1)
				sum += alpha[j1];

			if (sum == 0) // match
			{
				int c = 0;
				for (int p = i; c < substr.length(); ++p,c++)
					str[p] = 'X';
			}

		}

		i = j;
	}

	cout << str << endl;
	return 0;
}