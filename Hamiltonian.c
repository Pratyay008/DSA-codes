#include <stdio.h>
#include <stdbool.h>

#define V 5  


bool isSafe(int v, bool graph[V][V], int path[], int pos) {
    if (graph[path[pos - 1]][v] == 0)
        return false;

    for (int i = 0; i < pos; i++)
        if (path[i] == v)
            return false;

    return true;
}



void printSolution(int path[]) {
    printf("Hamiltonian Cycle found:\n");
    for (int i = 0; i < V; i++)
        printf("%d --> ", path[i]);

    printf("%d\n", path[0]);
}



bool hamiltonianCycleUtil(bool graph[V][V], int path[], int pos) {
    if (pos == V) {
        if (graph[path[pos - 1]][path[0]] == 1)
            return true;
        else
            return false;
    }

      for (int v = 1; v < V; v++) {
        if (isSafe(v, graph, path, pos)) {
            path[pos] = v;

            if (hamiltonianCycleUtil(graph, path, pos + 1) == true)
                return true;

            path[pos] = -1; 
        }
    }

    return false;
}



bool hamiltonianCycle(bool graph[V][V]) {
    int path[V];
    for (int i = 0; i < V; i++)
        path[i] = -1;

    path[0] = 0;

    if (hamiltonianCycleUtil(graph, path, 1) == false) {
        printf("No Hamiltonian Cycle exists.\n");
        return false;
    }

    printSolution(path);
    return true;
}



int main() {
    bool graph[V][V] = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 1, 1},
        {0, 1, 0, 0, 1},
        {1, 1, 0, 0, 1},
        {0, 1, 1, 1, 0}
    };

    hamiltonianCycle(graph);

    return 0;
}



// Time Complexity : O(N!)   where N is number of vertices
// Auxiliary Space : O(1)    since no extra space used

