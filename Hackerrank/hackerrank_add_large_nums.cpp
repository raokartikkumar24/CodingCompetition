#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#define MAX 50
using namespace std;

vector<int> result(MAX*2);
void add(long a1[])
{
	
	int carry = 0;
	int sum = 0;
	int i;
	for( i = MAX-1; i >=0 ; i-- )
	{
			
		result[i] = result[i] + a1[i];
		if( sum ) {
		//cout<<"sum : "<<sum<<" i : "<<i<<endl;
		result[i+1] = (carry + (result[i]%10));
		carry = result[i]/10;
		}
		
	}
	
	result[0] = carry;
	for(int j = 0 ; j < MAX ;j++)
	{
		
		if( result[j] )
		cout<<result[j];
	}
	cout<<endl;

}

void convertIntoArray(string n)
{
	long arr[MAX] = {0};
	for(int i = 0 ; i < n.length(); i++)
		arr[i] = n[i]-'0';
	add(arr);
	
	
	cout<<endl;

}

int main()
{
	int N;
	cin>>N;
	string number;
	while( N-- )
	{
		cin>>number;
		convertIntoArray(number);
	
	}
	
	
	return 0;
	

}