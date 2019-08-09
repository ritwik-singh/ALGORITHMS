#include <bits/stdc++.h>
using namespace std;

class graph
{
	int v;
	list<int> *adj;

	public:
		graph(int v);
		void addEdge(int v, int w);
		void intial();
		void DFS(int v ,bool visited[]);

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

void graph::DFS(int v,bool visited[])
{
	visited[v] = true;
	cout<<v<<" ";
	list<int>::iterator i;
	for(i = adj[v].begin(); i != adj[v].end(); ++i) 
		if(!visited[*i])
			DFS(*i,visited);
}

void graph::intial()
{
	bool *visited = new bool[v];
	for(int i = 0;i<V;i++)
		visited[i] = false;
	for(int i = 0;i<V;i++)
		if(!visited[i])
			DFS(i,visited);
}


int main()
{

	

	return 0;
}
