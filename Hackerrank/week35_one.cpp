#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long LL;

int main() {
    
    int N;
    cin >> N;
    map<string, int> priceList;
    for(int i = 0 ; i < N ; i++){
        string lName;
        int price;
        cin >> lName >> price;
        priceList[lName] = price;
    }
    
    
    int leastVal  = INT_MAX;
    string bestLaptop;
    bool foundOne = false;
        for(auto v : priceList) {
            int num[10] = {0};
            string price = std::to_string(v.second);
            for(int j = 0 ; j < price.length(); j++){
                num[price[j] - '0']++;
            }
            if(num[4] == num[7] && (num[4] * num[7] != 0)){
                int oldLeast = leastVal;
                leastVal = min(leastVal,v.second);
                if(oldLeast != leastVal)
                    bestLaptop = v.first;
                foundOne = true;
            }
        }
    
    if(!foundOne)
        cout << -1 << '\n';
    else
        cout << bestLaptop << '\n';
    
    return 0;
}

