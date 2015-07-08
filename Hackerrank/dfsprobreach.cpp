
#include <iostream>
#include <vector>

using namespace std;

class CGraph
{

public:
	CGraph(int n) : m_nNodes(n){

		for (int i = 0; i < m_nNodes; ++i) {
			std::vector<int> v;
			m_vEdges.push_back(v);
		}
	}

	~CGraph(){}


	void addEdges(int v, int u)
	{
		m_vEdges[v].push_back(u);
	}


	void display()
	{

		for (int i = 0; i < m_nNodes; ++i)
		for (int j = 0; j < m_vEdges[i].size(); ++j)
			cout << i << " --> " << m_vEdges[i][j] << endl;
	}


	vector<vector<int> > m_vEdges;
	int m_nNodes;
	


};



class CDepthFirstSearchPaths {


public:
	CDepthFirstSearchPaths(CGraph graphObject, int vertex) :m_OGraph(graphObject),  nVertexs(vertex)
	{
		for (int i = 0; i < vertex; ++i)
		{
			marked.push_back(false); //initially everything is unvisited
			edgeTo.push_back(-1); // init to soemthing 
		}
	}


	void dfs(int  vertex)
	{

		marked[vertex] = true;

		for (int i = 0; i < m_OGraph.m_vEdges[vertex].size(); ++i)
		{
			if (!marked[m_OGraph.m_vEdges[vertex][i]])
			{
				dfs(m_OGraph.m_vEdges[vertex][i]);
				edgeTo[m_OGraph.m_vEdges[vertex][i]] = vertex;
			}
		}
	}

	void printTo()
	{

		for (int i = 0; i < edgeTo.size(); ++i)
		{
			cout << edgeTo[i] << " ";
		}
		cout << endl;
	}

	void reset()
	{
		for (int i = 0; i < nVertexs; ++i)
		{
			marked.push_back(false); //initially everything is unvisited
		}
	}
	vector<bool> marked;
private:
	
	vector<int> edgeTo;
	CGraph m_OGraph;
	int nVertexs;


};

int main()
{

	int T;
	cin >> T;
	while (T--)
	{
		int nods;
		cin >> nods;
		int N = nods + 1;
		CGraph graph(nods+1);
		int curr_node = 0;
		while (N--)
		{
			int k;
			cin >> k;
			while (k--)
			{
				int l;
				cin >> l;
				graph.addEdges(curr_node, l - 1);


			}
			curr_node++;

		}

		vector<double> probs;
		int temp = nods;
		while (temp--)
		{
			double c;
			cin >> c;
			probs.push_back(c);
		}

		//graph.display();
		CDepthFirstSearchPaths dfs_paths(graph, nods+1);
		double allprobs = 0.0;
		for (int i = 0; i < nods ; ++i)
		{
			dfs_paths.dfs(i);
			if (dfs_paths.marked[nods] == true)
				allprobs += probs[i];
			dfs_paths.reset();

		}

		cout << (int)allprobs << endl;

	}
	return 0;

}
