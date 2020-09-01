
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

	void duplicateZeros(vector<int>& arr) {
		int len = arr.size();
		for (int i = 0; i < len; ) {
			if (arr[i] == 0) {
				int startIndex = i + 1;
				int endIndex = len - 1;
				for (int k = endIndex; k >= startIndex; k--) {
					arr[k] = arr[k - 1];
				}
				i += 2;
			}
			else {
				i++;
			}
		}
	}
};

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	Solution sol;
	sol.duplicateZeros(arr);
	for (auto &ii : arr) cout << ii << "\t";
	cout << "\n";
	return 0;
}