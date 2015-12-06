#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n;
	cin >> n;
	
	if (n % 2 == 0) cout << "Not perfect \n";
	else if ( n == 1 ) cout << "Perfect \n";
	else {
		vector<int> H(n);
		for (int H_i = 0; H_i < n; H_i++){
			cin >> H[H_i];
		}

		int i = 0;
		int j = n - 1;
		bool harmonic = false;
		for (i = 0, j = n - 1; i < n / 2, j > n / 2; i++, j--)
		{
			if (H[i] == H[j])  harmonic = true;
			else
			{
				harmonic = false;
				break;
			}
		}


		if (!harmonic)
		{
			cout << "Not perfect \n";
		}
		else
		{
			int mid = n/2;
			/*int mid = H[n / 2];
			for (i = 0, j = n - 1; i < n / 2 - 1, j > n / 2 - 1; i++, j--)
			{
				if (i == j) break;

				if (((mid - H[i]) == (mid - H[j])) && ((mid - H[i]) > 0) && ((mid - H[j]) > 0) && (H[i] != H[i+1]) && (H[j] != H[j-1]))
					harmonic = true;
				else
				{
					harmonic = false;
					break;
				}
			}*/
			
			for(i = 0 ; i < mid-1; i++ )
			{
				if( H[i] < H[i+1] )
					harmonic = true;
				else
				{
					harmonic = false;
					break;
				}
				
			}
			
			if( harmonic )
			{
				for(j = mid; j < n-1; j++)
				{
					if( H[j] > H[j+1] )
						harmonic = true;
					else
					{
						harmonic = false;
						break;
					}
				}
			}

			if (harmonic) cout << "Perfect \n";
			else cout << "Not perfect \n";


		}







	}

	return 0;
}
