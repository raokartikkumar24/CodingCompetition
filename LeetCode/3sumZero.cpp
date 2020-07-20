class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        bool found = false;
        vector<vector<int>> result;
        for(int i = 0 ; i < nums.size()-1; i++) {
            
            unordered_set<int> hashMap;
            
            for(int j = i +1; j < nums.size(); j++) {
                
                int x = -(nums[i] + nums[j]);
                if(hashMap.find(x) != hashMap.end()) {
                    vector<int> r;
                    r.push_back(nums[i]);
                    r.push_back(nums[j]);
                    r.push_back(x);
                    result.push_back(r);
                }
                else{
                    hashMap.insert(nums[j]);
                }
            }
        }
        return result;
        
    }
};