#include<iostream>
#include<vector>

using namespace std;


long childCount(vector<long> *v,long *childrens,long offset)
{
	long totalSize = 0;
	if (v[offset].size() == 0)
		childrens[offset] = 1;
	else if (0 == childrens[offset])
	{
		for (long i = 0; i < v[offset].size(); i++)
		{
			totalSize += childCount(v, childrens, v[offset][i]);
		}
	}
	childrens[offset] = totalSize + 1;
	return childrens[offset];
}


int main()
{
	
	long  N,M;
	cin>>N>>M;

	long *c = new long[N+1];

	for(long i = 0 ; i < N+1 ;i++)
		c[i] = 0;
	

	vector<long> edges[N];

	//cout<<edges.size()<<endl;
	for(long i = 0 ; i < M; i++)
	{
		long u,v;
		cin>>u>>v;

		//edges[u].push_back(v);
		edges[v].push_back(u);

	}

	childCount(edges,c,0);

	long count = 0;
	for (long i = 0; i < N; ++i)
	{
		if(c[i]%2 ==0)
			count++;
	}

	cout<<count<<endl;

	return 0;
}