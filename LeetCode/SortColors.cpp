#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:

	void sortColorsMoreSpace(vector<int>& nums) {

		int i = 0;
		int j = nums.size() - 1;
    
        vector<int> aux(nums.size(), 1);
		for (int k = 0; k < nums.size(); k++) {
            
            if(nums[k] == 0) {
                aux[i++] = 0;
            }
            else if(nums[k] == 2) {
                aux[j--] = 2;
            }

        }
        
        nums.clear();
        nums = aux;

	}

	void sortColors(vector<int>& nums) {

		int i = 0;
		int j = nums.size() - 1;

		for (int k = 0; k < nums.size(); ) {

			if (k <= j) {
				if (nums[k] < 1) {
					swap(nums[i], nums[k]);
					i++; k++;
				}
				else if (nums[k] > 1) {
					swap(nums[j], nums[k]);
					j--;
				}
				else {
					k++;
				}
			}
			else {
				k++;
			}
		}

	}
};

int main()
{
	int n;
	cin >> n;
	vector<int> nums(n);
	int i = 0;
	while (n--) {
		cin >> nums[i++];
	}

	Solution sol;
	sol.sortColors(nums);

	for(auto &it : nums) {
		cout << it << "\t";
	}
	cout << "\n";
	return 0;
}