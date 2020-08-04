#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    bool isPalindrome2(string s){

        if(s.empty()) return true;

        int len = s.length();

        int i = 0, j = len - 1;

        while( i < j) {

                if(!isalnum(s[i])) {
                    i++;
                    continue;
                }
                if(!isalnum(s[j])) {
                    j--;continue;
                }

                if(tolower(s[i]) != tolower(s[j]))
                    return false;
                i++;j--;
        }

        return true;

    }


    bool isPalindrome(string s) {
        
        int len = s.length();
        std::transform(s.begin(), s.end(), s.begin(),
         [](unsigned char c){ return std::tolower(c); });

        
        string newString;
        
        for(int i = 0 ; i < len; i++) {
            if(s[i] >= 97 && s[i] <= 122) {
                newString += s[i];
            }
            else if(s[i] >= 48 && s[i] <= 57) {
                newString += s[i];
            }
        }


        len = newString.length();
         
        int i = 0, j = len-1;
        while(i <= j) {
            
            if(newString[i] != newString[j]){
                return false;
            }
            i++;j--;
            
        }
        
        return true;
    }
};


int main()
{

    Solution sol;

    string in;
    getline(cin, in);
    cout << in << "\n";

    string output = (sol.isPalindrome(in) == 1) ? "Valid Palindrome" : "Invalid Palindrome";
    cout <<  output << "\n";

    output = (sol.isPalindrome2(in) == 1) ? "Valid Palindrome" : "Invalid Palindrome";
    cout <<  output << "\n";

    return 0;

}