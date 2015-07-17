#include <iostream>
using namespace std;

int main()
{
	
	int aD, aM, aY;
	cin >> aD >> aM >> aY;
	int eD, eM, eY;
	cin >> eD >> eM >> eY;

	if( aY == eY )
	{
		if ( aM < eM)
			cout << 0 << endl;
		else if ( aM == eM )
		{
			 if( aD < eD ) cout << 0 << endl;
			 else cout << 15*(aD-eD) << endl;

		}
		else if ( aM > eM)
		{
			cout << 500*(aM-eM) << endl;
		}
	}

	else if ( aY < eY )
		cout << 0 << endl;
	else
		cout << 10000 << endl;


	return 0;
}