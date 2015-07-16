#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int leng = input.length();
	if( input[leng-2] == 'P')
	{
		int number = (input[1]-'0') + (10 * (input[0]-'0'));

		if( number < 12) {
			number += 12;

		cout << number;

		string remain = "";
		for(int i = 2 ; i < leng-2; ++i)
			remain += input[i];
		cout << remain;
		}
		else if( number == 12 )
		{
			for(int i = 0 ; i < leng-2; ++i)
				cout << input[i];

		}
		
	}
	else
	{


		int number = (input[1]-'0') + (10 * (input[0]-'0'));

		if( number == 12) {
				 
				string remain = "";
				remain += "00";
				for(int i = 2 ; i < leng-2; ++i)
					remain += input[i];
				cout << remain;	
			}
		else
		{
			for(int i = 0 ; i < leng-2; ++i)
				cout <<  input[i];

		}
	}
	
	return 0;
}