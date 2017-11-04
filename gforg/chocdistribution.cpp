#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> choc;
        for(int i = 0 ; i < N; i++){
            int nn;
            cin >> nn;
            choc.push_back(nn);
        }
        int m;
        cin >> m;
        sort(choc.begin(),choc.end());
        
        int minC = choc[m-1] - choc[0];
        for(int i = 1; i < N-m+1; i++){
            int diff = choc[m-1+i]-choc[i];
            minC = min(minC,diff);
        }
        
        cout << minC << endl;
    }
    return 0;
}

