#include<iostream>
using namespace std;

unsigned long long smallerPowerOf2(long long v) {
	v--;
	v |= v >> 1;
	v |= v >> 2;
	v |= v >> 4;
	v |= v >> 8;
	v |= v >> 16;
	v++;
	return v >> 1;

}

bool win(unsigned long long n) {
    
    if(n == 1)
        return false;
    unsigned long long nextStep = ((n&(n-1)) == 0 ? n>>1 : n-smallerPowerOf2(n));
    return !win(nextStep);
}


int main()
{
    unsigned long long num;

    int test;
    cin >> test;
    while(test--) {
        cin >> num;
        cout << (win(num)?"Louise": "Richard");
        cout << "\n";
    }



    return 0;
}