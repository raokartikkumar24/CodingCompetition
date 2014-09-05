#include<iostream>
using namespace std;
int gcd(int a , int b )
{
	if( b == 0 ) return a;
	else
		return gcd( b , a%b);

}

int LCM(int a, int b)
{
	return a*b/gcd(a,b);
}

int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
	int N;
	cin>>N;
	long *A = new long[N+1];
//	long *B = new long[N+1];
	
	for(int i = 1 ; i <= N ; i++)
		cin>>A[i];
	
	cout<<A[1]<<" ";

	for(int i = 2 ; i < N ;i++)
		cout<<LCM(A[i],A[i+1]<<" ";
	cout<<A[N];
	
	cout<<endl;
	
	}


	
	return 0;
	
	
	
	
	

}