#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;
        
        map<string, vector<string>> hashMap;
        
        for(int i = 0 ; i < strs.size(); i++) {
            string value = strs[i];
            sort(strs[i].begin(), strs[i].end());
                hashMap[strs[i]].push_back(value);
          }
        
        
        for(auto &it : hashMap) {
            result.push_back(it.second);
        }
        
        return result;
        
    }
};

int main() {

	Solution sol;

	std::vector<string> v;
	v.push_back("ate");
	v.push_back("eat");
	v.push_back("tea");
	v.push_back("evil");
	v.push_back("live");
	v.push_back("at");

	auto result = sol.groupAnagrams(v);

	 return 0;

}