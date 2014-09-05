#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	map<string,long> query;
	
	int testcases,t2;
	cin>>testcases;
	t2 =testcases;
	vector<string> thenames;
	while( testcases-- )
	{
	
		string firstname;
		cin>>firstname;
		thenames.push_back( firstname );

	}
	
	sort(thenames.begin(), thenames.end());
	int c=0;
	while( c != t2 )
	{
		int sum =0 ;
		string naam = thenames[c];
		int i = 0;
		for(; i < naam.length(); i++ )
			sum += (naam[i]-'A')+1;
		
		query.insert( pair<string,long>( naam, sum*(c+1) ));

		c++;

	}

	int p;
	cin>>p;

	while( p-- ) {
	string q;
	cin>>q;

	cout<<query[q]<<endl;

	}


	
	return 0;
}

