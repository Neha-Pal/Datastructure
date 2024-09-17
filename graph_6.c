#include<stdio.h>
#define MAX_VERTICES 10
#define MAX_EDGES 100

int main(){
    int vertices;
    int edges;
    int adjacencyList[MAX_VERTICES][MAX_EDGES][2] = {0};
    int adjCount[MAX_VERTICES]={0};

    printf("Enter Vertices:");
    scanf("%d",&vertices);

    printf("Enter Edges:");
    scanf("%d",&edges);

    printf("Enter edges (u and v):\n");
    for(int i=0;i<edges;i++){
        int u, v, w;
        scanf("%d %d %d",&u, &v, &w);
        adjacencyList[u][adjCount[u]][0] = v;
        adjacencyList[u][adjCount[u]][1] = w;
        adjCount[u]++;

        adjacencyList[v][adjCount[v]][0] = u;
        adjacencyList[v][adjCount[v]][1] = w;
        adjCount[v]++;
    }

    //Print the list
    for(int i=0;i<vertices;i++){
        printf("vertex %d",i);
        for(int j=0;j<adjCount[i];j++){
            printf("(vertex %d, weight %d)",adjacencyList[i][j][0],adjacencyList[i][j][1]);
        }
        printf("\n");
    }
    return 0;
}