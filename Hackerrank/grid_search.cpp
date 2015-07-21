

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
using namespace std;
int main()
{

	ofstream output("out.txt");
	int T;
	cin >> T;
	while (T--)
	{
		int R, C, r, c;
		cin >> R >> C;
		vector<string> str;
		for (int i = 0; i < R; ++i)
		{
			string in;
			cin >> in;
			str.push_back(in);
		}

		cin >> r >> c;
	
		map<int, pair<int,bool> > map_index;
		for (int i = 0; i < r; ++i)
		{
			string search;
			cin >> search;

			for (int j = 0; j < str.size(); ++j)
			{
				int position = str[j].find(search);
				if ( position != -1 )
				{
					
						if ((j == 0) || (map_index.size() == 0))
						{
							pair<int, bool> p1;
							p1.first = position;
							p1.second = true;

							map_index.insert(make_pair(j, p1));
							break;
						
						}
						else if (map_index[j - 1].second == true)
						{
								if (map_index[j - 1].first == position)
								{
									pair<int, bool> p1;
									p1.first = position;
									p1.second = true;

									map_index.insert(make_pair(j, p1));
									break;
								}
						}

					}
				}

			}

		if (map_index.size() == r) output << "YES \n";
		else output << "NO \n";

		}

		
	return 0;
}

