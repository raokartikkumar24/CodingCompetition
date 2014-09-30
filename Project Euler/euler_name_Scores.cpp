#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
typedef long long LL;
using namespace std;


int main()
{
	ifstream filee("p022_names.txt");
	ofstream out("scores.txt");
	map<string,LL> query;
	
	
	vector<string> thenames;
	LL cc = 0;
	while( !filee.eof() ) {
	
		string firstname;
		getline(filee,firstname);
		
		thenames.push_back( firstname );
		cc++;

	}
	
	cout<<"No of names : "<<cc<<endl;
	
	sort(thenames.begin(), thenames.end());
	LL c=0;
	LL hugesum = 0;
	while( c != cc )
	{
		LL sum =0 ;
		string naam = thenames[c];
		LL i = 0;
		for(; i < naam.length(); i++ )
			sum += (naam[i]-'A')+1;
		
		out<<naam<<"\t\t"<<sum<<endl;
		
		hugesum += (sum*(c+1));
		//query.insert( pair<string,long>( naam, sum*(c+1) ));

		c++;

	}
	


	cout<<hugesum<<endl;
	
	return 0;
}

