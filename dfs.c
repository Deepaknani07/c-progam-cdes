#include <stdio.h>

#define MAX_NODES 100  // Maximum number of nodes

int graph[MAX_NODES][MAX_NODES]; // Adjacency matrix
int visited[MAX_NODES];          // Array to track visited nodes
int nodes;                       // Number of nodes

// Function to perform DFS
void dfs(int start) {
    printf("%d ", start);  // Print the current node
    visited[start] = 1;    // Mark the node as visited

    // Recur for all adjacent unvisited nodes
    for (int i = 0; i < nodes; i++) {
        if (graph[start][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int edges, u, v;

    printf("Enter number of nodes and edges: ");
    scanf("%d %d", &nodes, &edges);

    // Initialize adjacency matrix and visited array
    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < nodes; j++) {
            graph[i][j] = 0;
        }
        visited[i] = 0;
    }

    printf("Enter edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;  // Since the graph is undirected
    }

    printf("DFS Traversal starting from node 0:\n");
    dfs(0);  // Start DFS from node 0

    return 0;
}
