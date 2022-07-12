#include<stdio.h>
#include<stdlib.h>
int maxi=999;
void bellman(int g[10][3],int v,int e,int s){
    int dis[10];
    int i;
    for(i=0;i<v;i++){
        dis[i]=maxi;
    }
    dis[s]=0;
    int j;
    for(i=0;i<v-1;i++){
        for(j=0;j<e;j++){
            if(dis[g[j][0]]!=maxi && dis[g[j][0]] + g[j][2]<dis[g[j][1]]){
                dis[g[j][1]]=dis[g[j][0]] + g[j][2];
            }
        }
    }
    //checking negative cycle optional
    for(i=0;i<e;i++){
        int x=g[i][0];
        int y=g[i][1];
        int wt=g[i][2];
        if(dis[x]!=maxi && dis[x]+wt<dis[y]){
            printf("graph contain negative cycle\n");
        }
    }
    printf("Vertex distance    source\n");
    for(i=0;i<v;i++){
        printf("%d             %d\n",i,dis[i]);
    }  

}
int main(){
    int v;
    int e;
    printf("Enter the number of edges\n");
    scanf("%d",&e);
    printf("Enter the number of vertex\n");
    scanf("%d",&v);
    int g[10][3];
    int i,j;
    printf("Enter the graph(u,v,weight)\n");
    for(i=0;i<e;i++){
        for(j=0;j<3;j++){
            scanf("%d",&g[i][j]);
        }
    }
    int s=0;
    printf("Enter the source\n");
    scanf("%d",&s);
    
    bellman(g,v,e,s);
    return 0;
}
