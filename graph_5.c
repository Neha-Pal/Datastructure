#include<stdio.h>
#define MAX_VERTICES 10
#define MAX_EDGES 100

int main(){
    int vertices;
    int edges;
    int adjacencyList[MAX_VERTICES][MAX_EDGES] = {0};//Adjacency List

    int adjCount[MAX_VERTICES] = {0};//To tract the adjacency vertices for each vertex

    printf("Enter vertices:");
    scanf("%d",&vertices);

    printf("ENter edges:");
    scanf("%d",&edges);

    printf("Enter the edges(u and v):\n");
    for(int i=0;i<edges;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        //add edge u to v
        adjacencyList[u][adjCount[u]]=v;
        adjCount[u]++;
        //as it is a undirected graph
        adjacencyList[v][adjCount[v]]=u;
        adjCount[v]++;
    }

    //Print the list
    for(int i=0;i<vertices;i++){
        printf("Vertex %d:",i);
        for(int j=0;j< adjCount[i];j++){
            printf(" %d",adjacencyList[i][j]);
        }
        printf("\n");
    }
    return 0;
}