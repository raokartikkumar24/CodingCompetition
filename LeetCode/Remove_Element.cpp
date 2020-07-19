class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
    std::vector<int>::iterator it = nums.begin();
        for(; it != nums.end();) {
            if(*it == val) {
                nums.erase(it);
            }
            else it++;
        }
        
        return nums.size();
        
    }
};