#include<iostream>
using namespace std;
#define NUM_BITS_IN_INT ((sizeof(int) * 8)



int rotleft(int num, int shift);
int rotright(int num, int shift);


int rotleft(int num, int shift)
{
	
     return ((num << shift) | (num >> (NUM_BITS_IN_INT - shift))));
}

int rotright(int num, int shift)
{
    return ((num >> shift) | (num << (NUM_BITS_IN_INT - shift))));
}

int main()
{
	int n;
	cin>>n;
	cout<<rotleft(n,2)<<endl;
	cout<<rotright(n,2)<<endl;
	
	return 0;

}