#include<bits/stdc++.h>
using namespace std;
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
string dir="DLRU";
vector<string>solve(int i,int j,vector<vector<int>>&m,int n,vector<string>&ans,string move,vector<vector<int>>&vis){
    if(i==n-1 && j==n-1){
        ans.push_back(move);
        return ;
    } 
    for(int k=0;k<4;k++){
        int nexti=i+dx[k];
        int nextj=j+dy[k];
        if(nexti>=0 && nexti<n && nextj>=0 && nextj<n && !vis[nexti][nextj] && m[nexti][nextj]==1){
            vis[i][j]=1;
            solve(nexti,nextj,m,n,ans,move+dir[k],vis);
            vis[i][j]=0;
        }
    } 
}
 vector<string>solve(int i,int j,vector<vector<int>>&m,int n,vector<string>&ans,string move,vector<vector<int>>&vis){
    if(i==n-1 && j==n-1){
        ans.push_back(move);
        return ;
    }
    //downward
    if(i+1<n && !vis[i+1][j] && m[i+1][j]==1){
        vis[i][j]=1;
        solve(i+1,j,m,n,ans,move+'D',vis);
        vis[i][j]=0;
    }
    //left
    if(j+1<n && !vis[i][j+1] && m[i][j+1]==1){
        vis[i][j]=1;
        solve(i,j+1,m,n,ans,move+'L',vis);
        vis[i][j]=0;
    }
    //right
    if(j-1>=0 && !vis[i][j-1] && m[i][j-1]==1){
        vis[i][j]=1;
        solve(i,j-1,m,n,ans,move+'R',vis);
        vis[i][j]=0;
    }
    //upword
    if(i-1>=0 && !vis[i-1][j] && m[i-1][j]==1){
        vis[i][j]=1;
        solve(i-1,j,m,n,ans,move+'U',vis);
        vis[i][j]=0;
    }
 }
 vector<string>findPath(vector<vector<int>>&m,int n){
    vector<string>ans;
    vector<vector<int>>vis(n,vector<int>(n,0));
    if(m[0][0]==1) solve(0,0,m,n,ans,"",vis);
    return ans;
 }
int main(){

}