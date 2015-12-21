#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{

	int N;
	cin >> N;

	vector<int> hist(N);

	for (int i = 0; i < N; i++)
	{
		cin >> hist[i];
	}


	int i = 0;
	int maxArea = 0;
	stack<int> s;
	int area = 0;
	while( i < N )
	{

		if (s.empty() || hist[i] >= hist[s.top()]) {
			s.push(i);i++;
			}

		else
		{
			int topelement = s.top();
			s.pop();

			area = hist[topelement] * (s.empty() ? i : i - s.top() - 1);

			if (area > maxArea)
				maxArea = area;


		}
	}

	while (!s.empty())
	{
		int topelement = s.top();
		s.pop();

		area = hist[topelement] * (s.empty() ? i : i - s.top() - 1);

		if (area > maxArea)
			maxArea = area;

	}


	cout << maxArea << endl;

	return 0;
}