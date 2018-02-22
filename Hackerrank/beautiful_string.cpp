#include <iostream>
#include <string>

using namespace std;



int beautifulBinaryString(string b) {
    int count = 0;
    
    for (int i=2;i<b.length();i++){
        if (b[i]=='0' && b[i-2]=='0' && b[i-1]=='1') {count++; i+=2;}
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    string b;
    cin >> b;
    int result = beautifulBinaryString(b);
    cout << result << endl;
    return 0;
}

