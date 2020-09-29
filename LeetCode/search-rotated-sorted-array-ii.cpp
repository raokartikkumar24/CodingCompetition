#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        bool found = false;
        
        int i = 0;
        int j = nums.size() - 1;
        
        while(i<=j) {
            
            if(target == nums[i]) return true;
            else if(target == nums[j]) return true;
            else {
                i++;j--;
                found = false;
            }
        }
        return found;
    }
};

int main()
{
    int num, target;
    cin >> num >> target;

    std::vector<int> array;

    while(num--) {
        int x;
        cin >> x;
        array.push_back(x);
    }

    Solution sol;
    auto result = sol.search(array, target);
    std::cout << (result == 1 ? "true" : "false") << "\n";
    return 0;

}