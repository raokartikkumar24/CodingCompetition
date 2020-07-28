#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        set<int> hashMap;
        
        for(int i = 0 ; i < nums.size(); i++) {
            hashMap.insert(nums[i]);
        }
        
        vector<int> result;
        for(int i = 1 ; i <= nums.size(); i++) {
            if(hashMap.count(i) == 0) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};

int main()
{
    Solution solObj;
    vector<int> numbers;
    int n;cin >> n;
    while(n--) {
        int x;
        cin >> x;
        numbers.push_back(x);
    }

    vector<int> r = solObj.findDisappearedNumbers(numbers);

    return 0;
}