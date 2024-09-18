#include<stdio.h>
#define MAX_VERTICES 10
#define MAX_EDGES 100
int main(){
    int vertices;
    int edges;
    int adjList[MAX_VERTICES][MAX_EDGES][2] = {0};
    int adjCount[MAX_VERTICES]={0};

    printf("Enter vertices:");
    scanf("%d",&vertices);

    printf("Enter edges:");
    scanf("%d",&edges);

    printf("Edge between u and v:\n");
    for(int i=0;i<edges;i++){
        int u,v,w;
        scanf("%d %d %d",&u, &v, &w);
        adjList[u][adjCount[u]][0] = v;
        adjList[u][adjCount[u]][1] = w;
        adjCount[u]++;
    }
    for(int i=0;i<vertices;i++){
            printf("Vertex %d",i);
            for(int j=0;j<adjCount[i];j++){
                printf("(vertex %d, weight %d)",adjList[i][j][0],adjList[i][j][1]);
            }
            printf("\n");
        }
    return 0;
}