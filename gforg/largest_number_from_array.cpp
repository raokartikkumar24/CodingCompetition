#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string &s1, string &s2){
    return s1 > s2;
}

// Driver program
int main()
{
    int T;
    cin >> T;
    while(T--) {
    int N;
    cin >> N;
    vector<string> sNums(N);
    for(int i = 0 ; i < N; i++){
        cin >> sNums[i];
    }
    
    sort(sNums.begin(),sNums.end(),compare);
    
    string result = "";
    for(int i = 0 ; i < N; i++){
        result += sNums[i];
    }
    
    cout << result << '\n';
    }
    return 0;
}

