class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int len = nums.size();
        int sumN = len*(len+1)/2;
        int arraySum = 0;
        for(auto &i : nums) {
            arraySum += i;
        }
        return sumN - arraySum;
    }
};

//isomorophic strings - incomplete
class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if(s.empty() && t.empty()) return true;
        if(s.empty() || t.empty()) return false;
        if(s.length() != t.length()) return false;
        map<char, char> hashMap;
        for(int i = 0 ; i < s.length(); i++) {
            if(hashMap.count(s[i]) == 0) {
                hashMap.insert({s[i], t[i]});
            }
            else {
                char tt = hashMap[s[i]];
                if(tt != t[i]) return false;
            }
        }
        return true;
    }
};