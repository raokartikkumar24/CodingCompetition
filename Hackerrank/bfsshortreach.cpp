#include <iostream>
#include <vector>
#include <queue>

using namespace std;



class CGraph{


public:

	CGraph(int n, int e);
	~CGraph();
	void addEdges(int v, int u);
	void display();
	int degree(int vertex);
	std::vector<int> adj(int v);

	std::vector<std::vector<int> > m_vEdges;
	int m_nNodes;
	int m_nEdge;


};


CGraph::CGraph(int n, int e) : m_nNodes(n), m_nEdge(e){

	//cout<<"Creating graph object with "<<n<<" nodes"<<" and "<<e<<" m_vEdges"<<endl;
	for (int i = 0; i < m_nNodes; ++i) {
		std::vector<int> v;
		CGraph::m_vEdges.push_back(v);
	}



}

CGraph::~CGraph(){}


void CGraph::addEdges(int v, int u)
{
	m_vEdges[v].push_back(u);
	m_vEdges[u].push_back(v);
}


void CGraph::display()
{

	for (int i = 0; i < m_nNodes; ++i)
	for (int j = 0; j < m_vEdges[i].size(); ++j)
		cout << i << "-" << m_vEdges[i][j] << endl;


}



class CBFSTraversal
{

public:
	CBFSTraversal(CGraph graphObject, int v) : m_gGraph(graphObject), vertex(v)
	{
		for (int i = 0; i < v; ++i)
		{
			marked.push_back(false);
			//edgeTo.push_back(-1);
			distance.push_back(-1);
		}
	}



	void  bfs(int v)
	{
		queue<int> bfs_q;
		marked[v] = true;
		distance[v] = 0;
		//int ndistance = 1;
		
		bfs_q.push(v);

		while (!bfs_q.empty())
		{
			
			//cout<<"Inside queue"<<endl;
			int u = bfs_q.front();
			bfs_q.pop();
			//	cout << "Next node to be processed " << u << endl;
			for (int i = 0; i < m_gGraph.m_vEdges[u].size(); ++i)
			{
				if (!marked[m_gGraph.m_vEdges[u][i]])
				{
					marked[m_gGraph.m_vEdges[u][i]] = true;
					bfs_q.push(m_gGraph.m_vEdges[u][i]);
					//edgeTo[m_gGraph.m_vEdges[u][i]] = u;
					//if(distance[m_gGraph.m_vEdges[u][i]] < ndistance )
					distance[m_gGraph.m_vEdges[u][i]] = distance[u]+1;
				}
			}

		}

	}

	void displayEdgeTo()
	{
		cout << "Vertex" << "\t" << "EdgeTo \n";
		for (int i = 0; i < vertex; ++i)
			cout << i << "\t" << edgeTo[i] << "\n";
		cout << endl;
	}

	//Distance to the root node.
	//In our case it is the node 0 or the vertex 0
	void displayDistances(int source)
	{
		//cout << "Vertex" << "\t" << "Distance \n";
		for (int i = 0; i < vertex; ++i)
		{
			if (i != source)
			{
				if (distance[i] != -1)
					distance[i] *= 6;
				cout << distance[i] << " ";
			}
		}
		cout << endl;
	}


private:
	int vertex; //Vertex to be processed
	CGraph m_gGraph; //The graph object
	vector<bool> marked; //Array to hold if the vertex was visited
	vector<int> edgeTo; // How we arrived at that edge
	vector<int> distance; //To store the distance that it took to reach this vertex/node

};



int main()
{

	int T;
	cin >> T;

	while (T--)
	{
		int nods, eds;
		cin >> nods >> eds;

		CGraph graph(nods, eds);

		for (int i = 0; i < eds; i++)
		{
			int v, u;
			cin >> v >> u;
			graph.addEdges(v - 1, u - 1);
		}


		int source;
		CBFSTraversal bfstraversal(graph, nods);

		cin >> source;
		bfstraversal.bfs(source - 1);

		bfstraversal.displayDistances(source - 1);
	}

	return 0;

}

