#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
long maximumProgramValue(int n) {
	string t;
	int y;
	int temp = n;
	long long maxVal = 0;
	long long x = 0;
	while (n--) {
		cin >> t >> y;
		if (t == "add") {
			if (y > 0) {
				x += y;
				maxVal = max(maxVal, x);
			}
		}
		else {
			if (y > 0 && maxVal > y) {
				x = y;
				maxVal = max(maxVal, x);
			}
		}
	}

	return maxVal;
}

int main()
{

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	long result = maximumProgramValue(n);

	cout << result << endl;

	return 0;
}