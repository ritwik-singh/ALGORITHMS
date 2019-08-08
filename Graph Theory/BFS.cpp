#include <bits/stdc++.h>
using namespace std;

class graph
{
	int v;
	list<int> *adj;

	public:
		graph(int v);
		void addEdge(int v, int w);
		void BFS(int s);

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


void graph::BFS(int s)
{
	bool *visited = new bool[v];
	for(int i = 0;i<V;i++)
		visited[i] = false;

	list<int> queue;
	visited[s] = true;
	queue.push_back(s);

	lsit<int>::iterator i;

	while(!queue.empty())
	{
		s = queue.front();
		cout<<s<<" ";
		queue.pop_front();

		for(i = adj[s].begin();i != adj[s].end();++i)
		{
			if(!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}

}


int main()
{

	

	return 0;
}
