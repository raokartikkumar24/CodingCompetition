#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N,K;
        cin >> N >> K;
        vector<int> number(N);
        for(int i = 0 ; i < N; i++){
            cin >> number[i];
        }
        
        vector<int> maxSums;
        for(int i = 0 ; i < N ; i++){
            priority_queue<int> pq;
            for(int j = i; j < (i+K); j++){
                pq.push(number[j]);
            }
            if(!pq.empty()) {
                maxSums.push_back(pq.top());
            }
        }
        for(int i =0 ; i < maxSums.size()-K+1; i++)
            cout << maxSums[i] << " ";
        cout << "\n";
    }
    return 0;
}

