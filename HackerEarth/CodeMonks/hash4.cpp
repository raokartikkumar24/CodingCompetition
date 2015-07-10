#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string input;
	cin >> input;

	int Q;
	cin >> Q;
	while( Q-- )
	{
		int L1,R1,L2,R2;
		cin >> L1 >> R1 >> L2 >> R2;

		int i = L1-1;
		int j = L2-1;
		int p = R1-1;
		int q = R2-1;
		bool same = false;
		if(abs(L1-R1) != abs(L2-R2))
		 cout << "No \n";
		 else
		 {
			while ( (i <= p) && (j <= q) )
			{
				if( input[i] == input[j] )
					same = true;
				else {
					same = false;
					break;
				}
				i++;j++;
			}

			if( same ) cout << "Yes \n";
			else cout << "No \n";
		}

	}

	return 0;
}