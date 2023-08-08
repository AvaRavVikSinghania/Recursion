//each digit comes only exactly ones in row col and board(means 3X3 grid 9 equal grid)
#include<bits/stdc++.h>
using namespace std;
bool solve(vector<vector<char>>&board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]=='.'){
                for(char c ='1' ;c<='9';c++){
                   if(IsValid(board,i,j,c)){
                    board[i][j]=c;
                    if(solve(board)==true) return true;
                    else{
                        board[i][j]='.';
                    }
                   }
                }
            }
            return false;
        }
    }
    return true;
}
bool IsValid(vector<vector<char>>&board,int row,int col,char c){
    for(int i=0;i<9;i++){
        if(board[i][col]==c){
            return false;
        }
        if(board[row][i]==c) { 
            return false;
        }
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
    }
    return false;
}
void sudko_algorithm(vector<vector<char>>&board){
  solve(board);
}
int main(){

}