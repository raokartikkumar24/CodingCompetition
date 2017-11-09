#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    
    int T;
    cin >> T;
    while(T--){
        string input;
        cin >> input;
        
        string rotated;
        cin >> rotated;
        
        int Olen = (int)input.length();
        
        string leftRotate = input;
        string rightRotate = input;
        
        for(int i = 0 ; i < Olen; i++){
            if(i-2 < 0)
                leftRotate[i-2+Olen] = input[i];
            else
                leftRotate[i-2] = input[i];
        }
        
        for(int i = 0 ; i < Olen; i++){
            if(i+2 >= Olen)
                rightRotate[i+2-Olen] = input[i];
            else
                rightRotate[i+2] = input[i];
        }
        
      //  cout << leftRotate << "\t" << rightRotate << '\n';
        
        if((rightRotate == rotated) || (leftRotate == rotated)) cout << 1 << '\n';
        else cout << 0 << '\n';
        
    }
    return 0;
}

