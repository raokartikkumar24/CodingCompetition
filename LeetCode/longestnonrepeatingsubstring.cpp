#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;


class Solution {
public:
    bool isStringUnique(string s, int start, int end) {
        
        unordered_set<char> hashMap;
        
        for(int i = start ;  i < end; i++) {
            if(hashMap.count(s[i]) > 0 ) return false;
            hashMap.insert(s[i]);
        }
        return true;
    }
    
    int lengthOfLongestSubstring(string s) {
                
        int max_len = 0;
        
        for(int i = 0; i < s.length(); i++) {      
            for(int j = i +1 ; j <= s.length(); j++) {
                if(isStringUnique(s, i, j)) {
                    max_len = max(max_len, j - i);
                }
            }
        }
        return max_len;
    }
};

int main() {

    Solution sol;

    string inputString;
    std::cin >> inputString;

    int nlengthOfLongestSubstring = sol.lengthOfLongestSubstring(inputString);

    std::cout << nlengthOfLongestSubstring << "\n";

    return 0;
}