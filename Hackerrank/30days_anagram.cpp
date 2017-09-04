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

using namespace std;

int number_needed(string a, string b) {
    
    int hash[26] = {0};
    int bHash[26] = {0};
    
    for(int i = 0 ; i < a.length(); i++) hash[a[i]-'a']++;
    for(int i = 0 ; i < b.length(); i++) bHash[b[i]-'a']++;
      
    int sum = 0;
    
    for(int i = 0 ; i < 26; i++)
    {
        if(hash[i] != bHash[i] && (hash[i] * bHash[i]) == 0) 
            sum += hash[i] + bHash[i];
        else
        {
            sum += abs(hash[i] - bHash[i]);
        }
    }
   
    return sum;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

