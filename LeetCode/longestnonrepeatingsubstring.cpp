class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> hashMap;
        
        int max_len = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(hashMap.count(s[i]) == 0) {
                hashMap.insert(s[i]);
            }    
            else {
                max_len = max(max_len, (int) hashMap.size());
                hashMap.clear();
            }
        }
        
        if(hashMap.size() != 0) {
            max_len = max(max_len, (int) hashMap.size());
        }
        
        return max_len;
        
    }
};