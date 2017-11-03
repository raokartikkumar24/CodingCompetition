#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseNumbers(vector<int>& Num, int start, int end){
    int i = start;
    int j = end;
    
    while(i<j){
        swap(Num[i],Num[j]);
        i++;j--;
    }

}

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> Numbers(N);
        for(int i = 0 ; i < N ; i++){
            cin >> Numbers[i];
        }
        int K;
        cin >> K;
        
        for(int i=0; i < N; i += K){
            int endz = min(i+K-1,N-1);
            reverseNumbers(Numbers,i,endz);
        }
        
        for(int i = 0 ; i < N; i++)
            cout << Numbers[i] << " ";
        cout << "\n";
        
    }
    return 0;
}

