#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
   int i = 0, j = 0;
	int k = 0;// for new position

	for (; i < nums.size(); ) {

		if (j < nums.size() - 1) {
			j = i + 1;
			while (nums[i] == nums[j]) {
				j++;
				if (j >= nums.size()) break;
			}
		}
		nums[k] = nums[i];
		if (i != j)
			i = j;
		else i++;
		k++;

	}

	return k;
        
    }
};

int main()
{

	int n;
	cin >> n;
	vector<int> elements;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		elements.push_back(x);
	}

	Solution sol;
	sol.removeDuplicates(elements);

	return 0;
}