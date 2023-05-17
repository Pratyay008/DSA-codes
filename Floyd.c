#include<stdio.h>
#include<stdlib.h>
#define n 4
#define inf 999


void floyd(int graph[][n]){
    int i,j,k,dist[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            dist[i][j]=graph[i][j];
        }
    }

    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(dist[i][j]>dist[i][k]+dist[k][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
        printf("\nD%d:\n",k);
        display(dist);
    }
}



void display(int dist[][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (dist[i][j] == 999)
                printf("inf\t");
            else
                printf ("%d\t", dist[i][j]);
        }
    printf ("\n");
    }

}


int main()
{
    int graph[n][n] = { {0, 5, inf, 10},
						{inf, 0, 3, inf},
						{inf, inf, 0, 1},
						{inf, inf, inf, 0}
					};
    floyd(graph);
    return 0;
}

