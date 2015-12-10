#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int m1,m2,m3,m4,m5;
	cin >> m1 >> m2 >> m3 >> m4 >> m5;
	
	int w1,w2,w3,w4,w5;
	cin >> w1 >> w2 >> w3 >> w4 >> w5;
	
	int hs,hu;
	cin >> hs >> hu;
	
	int max1 = 500, max2 = 1000, max3 = 1500, max4 = 2000, max5= 2500;
	
	int ans = max((3*max1)/10 , ((250-m1)*max1 )/ 250 - (50*w1)) +
	max((3*max2)/10 , ((250-m2)*max2 )/ 250 - (50*w2)) +
	max((3*max3)/10 , ((250-m3)*max3 )/ 250 - (50*w3)) +
	max((3*max4)/10 , ((250-m4)*max4 )/ 250- (50*w4)) +
	max((3*max5)/10 , ((250-m5)*max5 )/ 250- (50*w5)) + (hs*100) - (hu*50);
	
	// int score1 = max((int)0.3*max1, ((int)(1-m1/250)*max1-(50*w1)));
	// int score2 = max((int)0.3*max2, ((int)(1-m2/250)*max2-(50*w2)));
	// int score3 = max((int)0.3*max3, ((int)(1-m3/250)*max3-(50*w3)));
	// int score4 = max((int)0.3*max4, ((int)(1-m4/250)*max4-(50*w4)));
	// int score5 = max((int)0.3*max5, ((int)(1-m5/250)*max5-(50*w5)));
	
	cout << ans << endl;
	
	

	return 0;
}