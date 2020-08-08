#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
  bool isLongPressedName(string name, string typed) {

    map<char, pair<int, int>> hashMap;
    map<char, pair<int, int>> hashMap2;

    for (int i = 0; i < (int)name.length(); i++) {
      hashMap[name[i]].first = i;
      hashMap[name[i]].second++;
    }


    for (int i = 0; i < (int)typed.length(); i++) {
      hashMap2[typed[i]].first = i;
      hashMap2[typed[i]].second++;
    }

  
    for (int i = 0; i < (int)name.length(); i++) {

      pair<int, int> h1 = hashMap[name[i]];
      pair<int, int> h2 = hashMap2[name[i]];

      if ((h1.second > h2.second) || (h1.first > h2.first))
        return false;

    }

    return true;

  }
};

int main() {

  Solution so;
  string name;
  cin >> name;

  string typed;
  cin >> typed;


  cout << so.isLongPressedName(name, typed);

  return 0;

}
