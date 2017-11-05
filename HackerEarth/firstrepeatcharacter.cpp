/*
 Print the first non repeating character.
 Assumes the input is string of lower case alphabets with no space
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    char c;
    int index;
    int count;
};


int main() {
    int T;
    cin >> T;
    
    vector<node> alphas(26);
    
    while(T--){
        string st;
        cin >> st;
        
        for(int i = 0 ; i  < st.length(); i++){
            alphas[st[i]-'a'].c = st[i];
            alphas[st[i]-'a'].count++;
            alphas[st[i]-'a'].index = i;
        }
        
        int minIndex = INT_MAX;
        char c ;
        for(int i  = 0 ; i < 26; i++){
            if(alphas[st[i]-'a'].count == 1){
                minIndex = min(minIndex,alphas[st[i]-'a'].index);
                c = alphas[st[i]-'a'].c;
            }
        }
        
        cout << st[minIndex] << endl;
    }
    return 0;
}

