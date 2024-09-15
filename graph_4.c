//Represent an Directed and Weighted Graph
//Time and Space Complexity - O(v^2)
#include<stdio.h>

#define MAX_VERTICES 10

int main(){
    int vertices;
    int edges;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter Vertices:");
    scanf("%d",&vertices);

    printf("Enter Edges:");
    scanf("%d",&edges);

    printf("Enter edges between the vertices and their weights:\n");
    for(int i = 0; i< edges; i++){

        int u,v,w;
        scanf("%d %d %d",&u, &v, &w);

        adjacencyMatrix[u][v] = w;
    }
    for(int i= 0;i<vertices;i++){
        for(int j=0;j<vertices; j++){
            printf("%d\t",adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}