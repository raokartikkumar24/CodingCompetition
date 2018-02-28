#include <iostream>
#include <vector>

using namespace std;


bool isPrime(int number)
{
    if (number <= 1)  return false;
    if (number <= 3)  return true;
    
    if (number%2 == 0 || number%3 == 0) return false;
    
    for (int i=5; i*i<=number; i=i+6)
        if (number%i == 0 || number%(i+2) == 0)
            return false;
    
    return true;
}


int main()
{
    
    int p,y;
    cin >> p >> y;
    
    if(p == y)
        cout << -1 << "\n";
    else {
        int max = -1;
    for(int i = p+1 ; i < y; ) {
        
        
        if(isPrime(i)) {

            if(i > max)
            {
                 max = i;
            }
            i++;
        }
        else {
            for(int k = 2; k <=p; k++) {
                if(i == y) break;
                if(i%k != 0) {
                    if(i > max)
                    {
                        max = i;
                    }
                    else
                     i++;
                }
                else {
                    i++;
                }
            }
            
        }
    }
    cout << max << "\n";
    }
    
    return 0;
}


