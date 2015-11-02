#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
		
		long mincount = 0;
		
		for(int i = 0 ; i < a.size(); i++)
		{
			if( a[i] == 0 && a[i+1] == 0 )
			{
				mincount++;
				a[i+1] = 1;
			}
		
		}
		
		cout << mincount << endl;
		
		
    }
    return 0;
}