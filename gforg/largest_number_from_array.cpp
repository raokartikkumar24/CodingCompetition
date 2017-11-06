#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2){
   string x = s1.append(s2);
   string y = s2.append(s1);

    return x > y;
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
    
    for(int i = 0 ; i < N; i++){
	cout << sNums[i];
	}
	cout << endl;
    }
    return 0;
}

