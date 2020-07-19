#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


/*
 * Complete the 'getMaxStreaks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY toss as parameter.
 */

vector<int> getMaxStreaks(vector<string> toss) {
	// Return an array of two integers containing the maximum streak of heads and tails respectively
	vector<int> result;
	std::string heads = "Heads";
	std::string tails = "Tails";

	int hCount = 0;
	int tCount = 0;
	unsigned int i = 0, j = 0;
	unsigned int k = 0;
	for (; i < toss.size(); ) {
		int c = 0;
		std::string strt = toss[i];
		k = i + 1;
		while (k < toss.size() && strt == toss[k] && strt == heads) {
			if (k < toss.size()) k++;
			c++;
		}
		i = k;
		hCount = max(hCount, c+1);
	}


	for (; j < toss.size(); ) {
		int c = 0;
		std::string strt = toss[j];
		k = j + 1;
		while (k < toss.size() && strt == toss[k] && strt == tails) {
			if (k < toss.size()) k++;
			c++;
		}
		j = k;
		tCount = max(tCount, c+1);
	}

	result.push_back(hCount);
	result.push_back(tCount);

	return result;

}

int main()
{

	int n;
	cin >> n;
	vector<string> inputs;
	while (n--) {
		string in;
		cin >> in;
		inputs.push_back(in);
	}
	vector<int> res = getMaxStreaks(inputs);


	return 0;
}

