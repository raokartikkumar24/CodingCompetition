#include<iostream>
using namespace std;
typedef long long LL;

LL array[7] = {0};

void check(int po,int n)
{
	int *a1 = new int[n];
	for(int o = 0 ; o < n ;o++) a1[o] = 0;
	LL sum = 0;
	long i = 100;
	long lim = 999;
	switch(n) {
		case 3: i = 100; lim = 999;break;
		case 4: i = 1000; lim = 9999;break;
		case 5: i = 10000; lim = 99999; break;
		case 6: i = 100000; lim = 999999; break;
	
	}
	
	for(i = 100; i <=lim ;i++)
	{
		int j = n-1;
		int k = i;
		while( k != 0 )
		{
			a1[j] = k%10;
			k/=10;
			j--;
		}
		LL powsum = 0;
		for(int p = 0; p < n ;p++)
			powsum+=(LL)(pow((double)a1[p],po));
		
		if( powsum == i )
		{
			cout<<"num : "<<i<<endl;
			sum+=powsum;
		}
		
	
	}
	
	array[po] = sum;
	//cout<<sum<<endl;

}

int main()
{
	LL N;
	cin>>N;
	check(3,3);
	check(4,4);
	check(5,5);
	check(6,6);
	
	
	cout<<array[N]<<endl;
	// for(int i = 0 ; i < 7; i++)
		// cout<<array[i]<<endl;
	
	
return 0;

}