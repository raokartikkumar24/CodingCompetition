#include <iostream>
#include <queue>
using namespace std;

int main() {
	 int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        priority_queue<int, std::vector<int>, std::greater<int> > pq;
        for(int i = 0 ; i < N ; i++){
            int number;
            cin >> number;
            pq.push(number);
        }
        int K;
        cin >> K;
        
        for(int i = 1 ; i < K; i++){
            if(!pq.empty())
                pq.pop();
        }
        
        if(!pq.empty())
            cout << pq.top() << "\n";
            
        
    }
	return 0;
}
