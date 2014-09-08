#include<iostream>
#include<map>
using namespace std;

int main()
{
	
	
	long n,m;
	cin>>n;
	map<long,long> N;
	for(long i = 0 ; i < n ; i++)
	{
		long num;
		cin>>num;
		if( N.count( num ) > 0 )
		{
			long val = N[num];
			val++;
			N[num] = val;

		}
		else
			N[num] =1;
		
	}
	cin>>m;
	map<long,long> M;
	for(long i = 0 ; i < m ; i++)
	{
		
		long numm;
		cin>>numm;
		
		if( M.count( numm) > 0 )
		{
			long vall = M[numm];
			vall++;
			M[numm] = vall;
		}
		else
			M[numm] = 1;
	}
	
	// cout<<N.size()+M.size()<<endl;
	
	map<long,long>::iterator n_it = N.begin();
	map<long,long>::iterator m_it = M.begin();
	for( ; n_it != N.end() , m_it != M.end(); n_it++,m_it++)
	{
		
		if( n_it->first != 0  && m_it->first != 0 && N.count(n_it->first) > 0 )  {
			if(n_it->second != m_it->second)
			{
				cout<<n_it->first<<" ";
			}
		}
	}
	
	cout<<endl;
	
	cout<<endl;
}