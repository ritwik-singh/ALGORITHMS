#include <bits/stdc++.h>
using namespace std;

class graph
{
	int v;
	list<int> *adj;

	public:
		graph(int v);
		void addEdge(int v, int w);
		void DFS(int s);

};


graph::graph(int v)
{
	this->v = v;
	adj = new list<int>[v];
}


void graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}


void graph::DFS(int s)
{
	bool *visited = new bool[v];
	for(int i = 0;i<V;i++)
		visited[i] = false;

	list<int> queue;
	visited[s] = true;
}


int main()
{

	

	return 0;
}
