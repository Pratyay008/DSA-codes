#include <stdio.h>
#define INF 99999

void floydWarshall(int graph[][100], int V) {
    int dist[V][V];
    int i, j, k;
    
    // Initialize the distance matrix
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    }
    
    // Run the Floyd-Warshall algorithm
    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
    // Print the distance matrix
    printf("The following matrix shows the shortest distances between every pair of vertices:\n");
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            if (dist[i][j] == INF) {
                printf("%7s", "INF");
            } else {
                printf("%7d", dist[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int V, i, j;
    
    // Get the number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    
    // Create the graph matrix
    int graph[V][100];
    
    // Get the graph matrix
    printf("Enter the graph matrix (use INF for unreachable vertices):\n");
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == -1) {
                graph[i][j] = INF;
            }
        }
    }
    
    // Run the Floyd-Warshall algorithm
    floydWarshall(graph, V);
    
    return 0;
}
