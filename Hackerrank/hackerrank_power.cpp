#include<iostream>
#include<math.h>
#include<map>
#include<set>

using namespace std;

int main()
{
	long long N;
	
	cin>>N;
	//map<long long,int> powers;
	set<long long> powerss;
	int c = 0;
	double i,j;
	for( i = 2 ; i <= N ;i++ )
	{
		for( j = 2 ; j <= N ;j++ )
		{
		powerss.insert((long long) pow(i,j));
			//powers.insert(pair<int,long long>((long long)pow(i,j),c));
			c++;
			
		}
	
	}
	cout<<powerss.size()<<endl;
	
	set<long long>::iterator it = powerss.begin();
	
	for(; it != powerss.end(); it++ )
		cout<<*it<<" ";
	
	//cout<<powers.size()<<" "<<powerss.size()<<endl;

}