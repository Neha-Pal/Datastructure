//Represent an Undirected and Weighted Graph
//Time and Space Complexity - O(v^2)
#include<stdio.h>

#define max_vertices 10
int main(){
    int edges;
    int vertices;
    int adjacency_matrix[max_vertices][max_vertices] = {0};
    
    printf("Enter Vettices:");
    scanf("%d",&vertices);

    printf("Enter Edges:");
    scanf("%d",&edges);

    printf("Enter Edge between the vertices and their weights: \n");
    for(int i = 0 ; i < edges ; i++){
        int u, v ,w;
        scanf("%d %d %d",&u,&v,&w);

        adjacency_matrix[u][v] = w;
        adjacency_matrix[v][u] = w;
    }

    for(int i = 0; i < vertices ; i++){
        for(int j = 0 ; j < vertices ; j++){
            printf("%d\t",adjacency_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}