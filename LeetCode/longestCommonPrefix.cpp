 #include <iostream>
 #include <vector>
 #include <string>

 using namespace std;

 string longestCommonPrefix(vector<string>& strs) {

     if(strs.size() == 0) return "";
        
        string result = "";
        int minLen = strs[0].length();
        for(int i = 0 ; i < strs.size(); i++) {
            minLen = min(minLen, (int)strs[i].length());
        }
        
        char prefixChar;
        for(int i = 0 ; i < minLen; i++) {
            
            prefixChar = strs[0][i];
            
            for(int j = 1; j < strs.size(); j++) {
                if(prefixChar != strs[j][i]) {
                    return result;
                }
            }
            
            result.push_back(prefixChar);
        }
        
        return result;
}

int main() {
    
    vector<string> inputStrings;
    inputStrings.push_back("flower");
    inputStrings.push_back("flow");
    inputStrings.push_back("flight");

    string lcp = longestCommonPrefix(inputStrings);

    cout << lcp << "\n";

    return 0;

}