#include <iostream>

int hammingDistance(int x, int y) {
        
        int xor_val = x ^ y;
         int count = 0;
        while(xor_val) {
            xor_val &= (xor_val-1);
            count++;
        }
        
        return count;
    }

int main() {
	
	int x,y;
	std::cin >> x >> y;

	int hammingVal = hammingDistance(x,y);

	std::cout << hammingVal << "\n";

	return 0;
}