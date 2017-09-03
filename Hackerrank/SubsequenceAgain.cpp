//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string subsequenceAgain(string s, int k) {

	map<char, vector<int> > sequence;
	
	char *anotherString = new char[s.length()];


	for(int j = 0 ; j < s.length(); j++)
		anotherString[j] = '*';


	for(int i = 0 ; i < s.length(); i++)
	{
		if(sequence.count(s[i]) == 0)
		{
			vector<int> p;
			p.push_back(i);	
			pair<char, vector<int> > pp;
			pp.first = s[i];
			pp.second = p;
			sequence.insert(pp);
		}
		else
		{
			//already found an character
			sequence[s[i]].push_back(i);
		
		}

	}


	for(int x = 0 ; x < s.length(); x++)
	{
		vector<int> positions = sequence.at(s[x]);
		if(positions.size() >= k)
		{
			for(int y = 0 ; y < positions.size(); y++)
			{
				anotherString[positions[y]] = s[x];				
			}
		}

	}


	
	string temp;

	for(int m=0; m < s.length(); m++)
	{
		if(anotherString[m] != '*') {
	
			temp.push_back(anotherString[m]);
		}
	}

	return temp;

}

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    string result = subsequenceAgain(s, k);
    cout << result << endl;
    return 0;
}
