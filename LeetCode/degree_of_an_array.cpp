#include <iostream>
#include <vector>
#include <string>
#include <map>

 using namespace std;


class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        map<int, vector<int>> frequency;
        
        int index = 0;
        for(int k = 0 ; k < nums.size(); k++) {
            frequency[nums[k]].push_back(index);
            index++;
        }
        
        int maxDegree = 0;
        for(auto &f : frequency) {
            maxDegree = max(maxDegree,(int)f.second.size());
        }
        
        int minLen = nums.size();
        
        int i = 0, j = nums.size() - 1;
     
        for(auto &it : frequency) {
            
            if(maxDegree == it.second.size()) {
                int itemLen = it.second[it.second.size()-1] - it.second[0] + 1;
                minLen = min(minLen, itemLen);
            }      
            
        }
        
        return minLen;
    }
};

int main()
{

    Solution sol;

    int len;
    cin >> len;
    vector<int> input(len);

    for(int i  = 0 ; i < len; i++) {
        int items;
        cin >> items;
        input.push_back(items);
    }
    int result = sol.findShortestSubArray(input);
    cout << "Result is : " << result << "\n";

    return 0;
}