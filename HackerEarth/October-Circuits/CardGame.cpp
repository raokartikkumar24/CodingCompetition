#include <iostream>
#include <vector>

typedef long long LL;

using namespace std;

int main(){
    int n,m;
    vector<LL> first;
    vector<LL> second;
    cin >> n;
    for(int i = 0 ; i < n ;i++){
        int e;
        cin >> e;
        first.push_back(e);
    }
    
    cin >> m;
    
    for(int i = 0 ; i < m ;i++){
        int e;
        cin >> e;
        second.push_back(e);
    }
    
   
    LL maxElement = 0;
    
    for(int i = 0; i < m; i++){
        maxElement = max(maxElement,second[i]);
    }
    
    
    LL diff = 0;
    
    if(maxElement == 1000000000)
        cout << 0 << "\n";
    else {
    for(int i = 0 ; i < n; i++){
        if(first[i] <= maxElement){
            diff += (maxElement-first[i]) + 1;
        }
    }
    
    cout << diff << "\n";
    }
   
    return 0;
}

