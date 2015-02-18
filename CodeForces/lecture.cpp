#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
int main()
{

	map<string,string> words;
	int n,m;
	cin>>n>>m;

	while(m--)
	{
		string s1,s2;
		cin>>s1>>s2;
		words.insert(pair<string,string>(s1,s2));
	}

	std::vector<string> ans;
	while(n--)
	{
		string s;
		cin>>s;

		if( s.length() <= words[s].length())
			ans.push_back(s);
		else
			ans.push_back(words[s]);
	}

	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<" ";
	}

	return 0;

}