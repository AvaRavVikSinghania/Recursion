#include<bits/stdc++.h>
using namespace std;
void solve(int ind,vector<int>&ds,vector<vector<int>>&ans,vector<int>&arr){
    ans.push_back(ds);
    for(int i=ind;i<arr.size();i++){
        if(i!=ind && arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        solve(i+1,ds,ans,arr);
        ds.pop_back();
    }

}
vector<vector<int>>subsetWithDub(vector<int>&arr){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr.begin(),arr.end());
    solve(0,ds,ans,arr);
    return ans;
}
int main(){

}