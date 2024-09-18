//Directed unweighted graph


#include<stdio.h>
#define MAX_VERTICES 10
#define MAX_EDGES 100
int main(){
    int vertices;
    int edges;
    int adjacencyList[MAX_VERTICES][MAX_EDGES] ={0};
    int adjCount[MAX_VERTICES]={0};

    printf("Enter vertices:");
    scanf("%d",&vertices);

    printf("Enter edges:");
    scanf("%d",&edges);

    printf("Edge between u and v:\n");
    for(int i=0;i<edges;i++){
        int u, v;
        scanf("%d %d",&u, &v);
        adjacencyList[u][adjCount[u]] = v;
        adjCount[u]++;
    }

    //print graph
    for(int i=0;i<vertices;i++){
        printf("Vertex %d:",i);
        for(int j=0;j<adjCount[i];j++){
            printf(" %d",adjacencyList[i][j]);
        }
        printf("\n");
    }
     return 0;
}