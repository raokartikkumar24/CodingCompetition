#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;


class Solution {
public:
    bool detectCapitalUse(string word) {
        
        if(word.length() == 1) return true;
        
        bool result = false;
        bool hasUppercase = false;
        bool hasLowercase = false;
        int LargeCap[26] = {0};
        int smallCap[26] = {0};
        int len = word.length();
        for(int i = 0; i < word.length(); i++) {
            
            if(word[i] >= 65 && word[i] <= 90) {
                LargeCap[word[i] - 'A']++;
                hasUppercase = true;
            }
            else {
                smallCap[word[i] - 'a']++;
                hasLowercase = true;
            }      
        }
        
        int uppercasesum = 0, lowercasesum = 0;
        for(int i = 0 ; i < 26; i++) 
        {
            uppercasesum += LargeCap[i];
            lowercasesum += smallCap[i];
        }
        
        cout << "Upper : " << uppercasesum << "\n";
        cout << "Lower : " << lowercasesum << "\n";

        if(uppercasesum  == len) return true;
        
        if(word[0] >= 65 && word[0] <= 90) {
            if(lowercasesum  == (len - 1))
                return true;
            
        }
        
        if(lowercasesum == len) return true;
        
        return false;
        
    } 
};

int main()
{

    Solution sol;
    string in;
    cin >> in;

    bool result = sol.detectCapitalUse(in);

    cout << result << "\n";
    return 0;
}