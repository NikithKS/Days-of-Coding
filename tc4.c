#include<iostream> 
#include <list> 
#define NIL -1 
using namespace std; 
// priority_queue<int> ans;
priority_queue<int, vector<int>, std::greater<int> > ans;



class Graph 
{ 
	int V; 
	list<int> *adj; 
	void bridgeUtil(int v, bool visited[], int disc[], int low[], 
					int parent[]); 
public: 
	Graph(int V);  
	void addEdge(int v, int w); 
	void bridge();  
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); 
	adj[w].push_back(v); 
}
void Graph::bridgeUtil(int u, bool visited[], int disc[], 
								int low[], int parent[]) 
{ 
	static int time = 0; 

	visited[u] = true; 

	disc[u] = low[u] = ++time; 

	list<int>::iterator i; 
	for (i = adj[u].begin(); i != adj[u].end(); ++i) 
	{ 
		int v = *i; 

		if (!visited[v]) 
		{ 
			parent[v] = u; 
			bridgeUtil(v, visited, disc, low, parent); 

			low[u] = min(low[u], low[v]); 

			if (low[v] > disc[u]) 
			ans.push(u);
			ans.push(v);

		} 

		else if (v != parent[u]) 
			low[u] = min(low[u], disc[v]); 
	} 
} 

void Graph::bridge() 
{ 
	bool *visited = new bool[V]; 
	int *disc = new int[V]; 
	int *low = new int[V]; 
	int *parent = new int[V]; 

	for (int i = 0; i < V; i++) 
	{ 
		parent[i] = NIL; 
		visited[i] = false; 
	} 

	for (int i = 0; i < V; i++) 
		if (visited[i] == false) 
			bridgeUtil(i, visited, disc, low, parent); 
} 

int main() 
{ 
    int m,n;
    cin >> m>>n;
    Graph planet(n);
    int a, b;

    for(int i = 0; i< m; i++){
        cin>>a>>b;
        planet.addEdge(a, b);
    }

    while(!ans.empty())
  {
    cout << arr.top() << endl;
    ans.pop();
  }  
}
	