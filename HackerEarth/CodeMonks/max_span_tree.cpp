#include <iostream>
#include <vector>
#include <queue> 
#include <functional>
#include <map>
#include <stack>
using namespace std;

class CGraph
{

public:
	CGraph(int n, int e) : m_nNodes(n), m_nEdge(e){

		for (int i = 0; i < m_nNodes; ++i) {
			vector<int> v;
			vector<pair<int, int>> pairs;
			m_weights.push_back(pairs);
			visited.push_back(false);
		}
	}

	~CGraph(){}


	void addEdges(int v, int u, int w)
	{
		
		pair<int, int> p1;
		p1.first = w;
		p1.second = u;
		m_weights[v].push_back(p1);

		pair<int, int> p2;
		p2.first = w;
		p2.second = v;
		m_weights[u].push_back(p2);
	}


	vector<pair<int,int>> Weight(int v)
	{
		return m_weights[v];
	}

/*	vector<int> Adj(int v)
	{
		return m_vEdges[v];
	}
*/
	void display()
	{
		
		for (int i = 0; i < m_nNodes; ++i)
		{
			vector<pair<int, int> > temp = Weight(i);
			
			for (auto x : temp){
				cout << x.second << " " << x.first;
			}
			cout << endl;
		}

	}

	void traverse(int node)
	{
		visited[node] = true;
		vector<pair<int, int> > temp = Weight(node);
		for (auto x : temp)
			pq.push(x);

		int distance = 0;
		while (!pq.empty())
		{
			pair<int,int> t = pq.top();
			int nextnode = t.second;
			pq.pop();
			

			if (visited[nextnode] == false)
			{
				vector<pair<int, int> > ww = Weight(nextnode);
				for (auto x : ww)
					pq.push(x);

				visited[nextnode] = true;
				distance += t.first;
			}
		}
		cout << distance << endl;

	}

	//store adjacency list and weights
	vector<vector<pair<int,int> > > m_weights;
	int m_nNodes;
	int m_nEdge;
	vector<bool> visited;
	//min PQ ordered by weights
	priority_queue<pair<int, int> > pq;
};

class Prims
{

public:
	Prims(CGraph g) : m_graph(g) {}



private:
	CGraph m_graph;

};

int main()
{
	int T;
	cin >> T;

	while( T-- )
	{

	int N, M;
	cin >> N >> M;
	CGraph primsGraph(N, M);
	for (int i = 0; i < M; ++i)
	{
		int x, y, r;
		cin >> x >> y >> r;
		primsGraph.addEdges(x-1, y-1, r);

	}
	//primsGraph.display();
	primsGraph.traverse(0);

	}

	return 0;
}