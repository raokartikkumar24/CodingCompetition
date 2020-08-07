class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> hashMap;
        vector<int> result;
        
        for(int i = 0 ; i < nums.size(); i++) {
           if(hashMap.count(nums[i]) > 0) {
               result.push_back(nums[i]);
           }
            else {
                hashMap.insert({nums[i], 1});
            }
        }
          
        return result;
    }
};