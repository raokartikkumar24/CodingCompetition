#include<iostream>
typedef long long LL;
using namespace std;


int main()
{

int array[20] ;
int i;
for(i = 1 ; i <=20 ;i++)
	array[i-1] =i;
	


	
int j =0;

for(j = 1; j <= 20 ;j++)
{

	int num = array[j];
	if( num % array[j] == 0 )
		array[j] /= j;
	

}

for(i = 0 ; i < 20 ; i++ )
	cout<<array[i]<<" ";

cout<<endl;


return 0;
}
