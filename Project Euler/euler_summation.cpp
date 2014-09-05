#include<iostream>
typedef long long londata;
using namespace std;

void generateFib()
{
	londata fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	
	for(int i = 2 ; i < 100 ; i++)
	{
			fibo[i] = fibo[i-1]+fibo[i-2];
			cout<<fibo[i]<<" ";
	}
	
	cout<<endl;
	
}

int main()
{
	generateFib();
	return 0;

}
