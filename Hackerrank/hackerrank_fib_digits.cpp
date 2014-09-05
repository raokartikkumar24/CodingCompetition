#include<iostream>
#include<map>
using namespace std;
typedef long long LL;
int GetNumberOfDigits (LL i)
{
	//cout<<"digits of : "<<i<<endl;
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}

map<int,LL> fibs;

void generate()
{
	fibs.insert(pair<int,LL>(0,1));
	LL a = 0;
	LL b = 1;
	LL c;
	LL i = 1;
	for(; i<=50; i++)
	{
		c = a+b;
		int dig = GetNumberOfDigits(c);
		//fibs[dig] = i;
		fibs.insert(pair<int,LL>(dig,i));
		cout<<fibs[i]<<endl;
		a = b;
		b = c;
	}

}


int main()
{
	map<int,LL>::iterator it = fibs.begin();
	generate();
	for(; it != fibs.end(); it++ )
	{
		cout<<"Inside the for loop"<<endl;
		cout<<it->first<<" : "<<it->second<<endl;
	}
		
	return 0;

}
