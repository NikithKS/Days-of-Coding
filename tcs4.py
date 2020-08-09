
from collections import defaultdict 
class Graph: 
    def __init__(self,vertices): 
        self.V= vertices 
        self.graph = defaultdict(list)
        self.Time = 0

    def addEdge(self,u,v): 
        self.graph[u].append(v) 
        self.graph[v].append(u) 


    def bridgeUtil(self,u, visited, parent, low, disc): 

        visited[u]= True

        disc[u] = self.Time 
        low[u] = self.Time 
        self.Time += 1

        for v in self.graph[u]: 
            if visited[v] == False : 
                parent[v] = u 
                self.bridgeUtil(v, visited, parent, low, disc) 

                low[u] = min(low[u], low[v]) 

                if low[v] > disc[u]:
                    ans.add(u)
                    ans.add(v)
	
            elif v != parent[u]: 
                low[u] = min(low[u], disc[v]) 

    def bridge(self): 
        visited = [False] * (self.V) 
        disc = [float("Inf")] * (self.V) 
        low = [float("Inf")] * (self.V) 
        parent = [-1] * (self.V) 

        for i in range(self.V): 
            if visited[i] == False: 
                self.bridgeUtil(i, visited, parent, low, disc) 
		

mn = input().split()
m = int(mn[0])
n = int(mn[1])

ans =set()

planets = Graph(n)

for i in range(m):
    a,b = list(map(int, input().split()))
    planets.addEdge(a, b)

planets.bridge()
ans = sorted(ans)
for i in ans:
    print(i)
exit(0)