#include <iostream>
#include <set>
#include <string> 
using namespace std;

class compare
{
    public:
        bool operator()(const pair<string,int>& lhs, const pair<string,int>& rhs)
        {
        	if( lhs.second == rhs.second )
            	return lhs.first < rhs.first;
            else
            	return lhs.second > rhs.second;
        }
};

int main()
{
	
		int N;
		cin >> N;
		set<pair<string,int>, compare > students;

		for (int i = 0; i < N; ++i)
		{
			string n;
			int m;
			cin >> n >> m;
			students.insert(make_pair(n,m));
		}

		set<pair<string,int>>::iterator it = students.begin();
		for(; it != students.end(); it++)
		{
			cout << it->first << " " << it->second << endl;
		}
	return 0;
}