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

bool is_balanced(string expression) {
    stack<char> opening;
    
    if(expression.length()%2 != 0) return false;
    
    bool matched = true;
    for(int i = 0 ; i < expression.length(); i++){
        switch(expression[i]){
            case '(' : {
                opening.push(expression[i]);
                break;
            }
            case ')' : {
                if(!opening.empty()) {
                char ele = opening.top();
                if(ele == '(') {
                    matched &= true;
                    opening.pop();
                }
                else{
                    return false;
                }
                }
                else return false;
               break;
            }
            case '[' : {
                opening.push(expression[i]);
                break;
            }
            case ']' : {
                if(!opening.empty()) {
                char ele2 = opening.top();
               
                if(ele2 == '[') {
                    matched &= true;
                    opening.pop();
                }
                else{
                    return false;
                }
                }
                else return false;
                break;
            }
            case '{' :{
                opening.push(expression[i]);
                break;
            }
            case '}' :{
                if(!opening.empty()) {
                char ele3 = opening.top();
                if(ele3 == '{') {
                    matched &= true;
                    opening.pop();
                }
                else{
                    return false;
                }
                }
                else return false;
                break;
            }
        }
    }
    
    if(opening.size() != 0)
        matched = false;
    
    return matched;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

