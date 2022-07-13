class Graph:

    def __init__(self, vertices):
        self.V = vertices   
        self.graph = []     

    def addEdge(self, s, d, w):
        self.graph.append([s, d, w])

    def print_solution(self, dist):
        print("Vertex Distance from Source")
        for i in range(self.V):
            print(i,"\t\t\t\t",dist[i])

    def bellman_ford(self, src):

        dist = [float("Inf")] * self.V
        dist[src] = 0
        #print(dist)
        for i in range(self.V - 1):
            for s, d, w in self.graph:
                if dist[s] != float("Inf") and dist[s] + w < dist[d]:
                    dist[d] = dist[s] + w
                    #print(dist)
                    
        for s, d, w in self.graph:
            if dist[s] != float("Inf") and dist[s] + w < dist[d]:
                print("Graph contains negative weight cycle")
                return

   
        self.print_solution(dist)


g = Graph(7)

g.addEdge(0, 1, 6)
g.addEdge(0, 2, 5)
g.addEdge(0, 3, 5)
g.addEdge(1,4,-1)
g.addEdge(3,5,-1)
g.addEdge(5,6,3)
g.addEdge(4,6,3)
g.addEdge(2, 1, -2)
g.addEdge(2, 4, 1)
g.addEdge(3, 2, -2)

g.bellman_ford(0)
