#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
  
//this resulted in timeout, for larger inputs as we are accessing 2 hash tables
/*  unordered_multiset<string> hashTable;
    unordered_multiset<string> ransomHash;
    
       for(int i =0 ; i < ransom.size(); i++){
        ransomHash.insert(ransom[i]);
    }
    
    for(int i =0 ; i < magazine.size(); i++){
        hashTable.insert(magazine[i]);
    }
    
    bool found = true;
    
    for(int i = 0 ; i < ransomHash.size(); i++){
      if(hashTable.count(ransom[i]) >= ransomHash.count(ransom[i]))
         found = true;
        else {
            found = false;
            break;
        }
      }
    return found;
    */
   
    
     unordered_map<string, int> words;
    for (auto &it: magazine)
        words[it]++;
    for (auto &it: ransom) {
        if (words[it]>0)
            words[it]--;
        else
            return false;
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

