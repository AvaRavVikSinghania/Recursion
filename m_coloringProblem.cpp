#include<bits/stdc++.h>
using namespace std;
bool IsSafe(int node,int color[],bool graph[101][101],int N,int col){
    for(int k=0;k<N;k++){
        if(k!=node && graph[k][node]==1 && color[k]==col) return false;
    }
    return false;
}
bool solve(int node,int color[],int m,int N,bool graph[101][101]){
    if(node==N) return true;
    for(int i=1;i<=m;i++){
        if(IsSafe(node,color,graph,N,i)){
            color[node]=i;
            if(solve(node+1,color,m,N,graph)==true) return true;
            color[node]=0;
        }

    }
    return false;
}
bool graphColoring(bool graph[101][101],int m,int N){    
    //m ->No of color
    //N ->total No of edges
    int color[N]={0};
    if(solve(0,color,m,N,graph)) return true;
    return false;
}
int main(){
     
}