//Represent an Directed and Unweighted Graph
//Time and Space Complexity - O(v^2)
#include<stdio.h>
#define MAX_VERTICES 10

int main(){
    int vertices;
    int edges;

    int adjacencyMatric[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter Vertices:");
    scanf("%d",&vertices);

    printf("Enter Edges:");
    scanf("%d",&edges);

    printf("Edges between the vertices:\n");
    for(int i = 0 ; i < edges ; i++){
        int u, v;
        scanf("%d %d",&u, &v);
        adjacencyMatric[u][v]=1;
    }

    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            printf("%d\t",adjacencyMatric[i][j]);
        }
        printf("\n");
    }
    return 0;
}