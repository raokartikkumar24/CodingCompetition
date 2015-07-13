#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	
	int k;
	cin >> k;
	string s;
	cin >> s;
	int orgK = k;
	std::vector<string> permuts;
	string orig = s;
	bool pushorig = false;
	vector<int> p ;
	for(int x = 0 ; x < s.length(); ++x)
	{
		int val;
		cin >> val;
		p.push_back(val);
	}

	while( k-- )
	{
		string temp = s;
		int i = 0;
		while( i < temp.length())
		{
			s[i] = temp[p[i]-1];
			i++;
		}

		if ( s == orig)
		{
			permuts.push_back(s);			
			pushorig = true;
			//cout << "Will break k is : " << k << endl;
			break;
		}
		else
			permuts.push_back(s);
	}

	if(!pushorig)
		permuts.push_back(s);
			
	//cout << "length of vector : " << permuts.size() << endl;
	//for(int i = 0 ; i < permuts.size(); ++i)
	//	cout << permuts[i] << " ";
	//cout << endl;
	cout << permuts[(orgK-1)%permuts.size()] << endl;


	return 0;
}
