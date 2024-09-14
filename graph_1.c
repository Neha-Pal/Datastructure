//Represent an unweighted undirected grapg using adjacency matric
//Time and Space Complexity - O(v^2)
#include<stdio.h>

# define max_vertices 10

int main(){
    int adjacencyMatrix[max_vertices][max_vertices] = {0};
    int edges;
    int vertices;
    printf("Enter number of vertices:");
    scanf("%d",&vertices);

    printf("Enter number of edges:");
    scanf("%d",&edges);

    printf("Edge between two vertices(u and v)");
    printf("\n");
    for(int i = 0 ; i < edges ; i++){
        int u,v;
        scanf("%d %d",&u,&v);

        if(vertices>max_vertices){
            printf("Error..");
        }

        if(u>=vertices || v>+vertices || u<0 || v<0){
            printf("Invalid");
        }
        //As if it a undirected graph so both the vertices are denoted as adjacency[u][v] and adjacenct[v][u]
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }

    //Print the graph
    for(int i = 0;i<vertices;i++){
        for(int j = 0; j<vertices;j++){
            printf("%d\t", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}