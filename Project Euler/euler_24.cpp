#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<map>
#include<time.h>
using namespace std;
int main()
{
		map<string,int> lexs;
		ofstream permuts("permut.txt");
		bool found = false;
		bool per= false;
		string w;
		cin>>w;
		long long mil = 0;
		string org = w;
		clock_t tstart = clock();
		
		do
		{
			lexs.insert(pair<string,int>(w,mil));
			permuts<<mil<<"\t\t\t"<<w<<endl;
			mil++;
			
			
		}while( per = next_permutation(w.begin(),w.end()));
	
		cout<<"Time taken : "<<(double)(clock() - tstart)/CLOCKS_PER_SEC<<endl;
	
	permuts.close();
	return 0;

}