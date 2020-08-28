class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int sAlpha[26] = {0};
        int tAlpha[26] = {0};
        
        for(int i = 0 ; i < s.length(); ++i) 
            sAlpha[s[i] - 'a']++;
        for(int i = 0 ; i < t.length(); ++i)
            tAlpha[t[i] - 'a']++;
        
        char result;
        for(int i = 0 ; i < 26; ++i) {
            if(sAlpha[i] != tAlpha[i]) {
                result = char(i+'a'); 
            }
        }
        
        return result;
    }
};