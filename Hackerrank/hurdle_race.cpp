#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

	int n,k;
	cin >> n >> k;

	vector<int> h(n);

	for(int i = 0 ; i < n; i++)
		cin >> h[i];

	int maxH = -1;

	for(int i = 0 ; i < n; i++)
		maxH = max(h[i],maxH);

	int result = maxH - k;

	if(result < 0 ) cout << 0 << "\n";
	else cout << result << "\n";

	return 0;
}
