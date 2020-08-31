class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> hashMap;
        
        for(int i = 0; i < arr.size(); ++i) {
            if(hashMap.count(arr[i]) == 0)
                hashMap.insert({arr[i], 1});
            else
                hashMap[arr[i]]++;
        }
        
        vector<int> counters;
        for(auto &it : hashMap) {
            counters.push_back(it.second);
        }
        
        sort(counters.begin(), counters.end());
        
        int len = counters.size();
        
        for(int i = 0; i < len-1; i++) {
            if(counters[i+1] == counters[i])
                return false;
        }
        
        return true;
    }
};