#include<bits/stdc++.h>
using namespace std;
void findCombinatin(int ind,vector<int>&arr,int target,vector<vector<int>>&ans,vector<int>&temp){
   if(ind==arr.size()){
    if(target==0){
        ans.push_back(temp);
        return ;
    }
    return;
   }
   if(target>=arr[ind]){
    temp.push_back(arr[ind]);
    findCombinatin(ind,arr,target-arr[ind],ans,temp);
    temp.pop_back();
   }
   findCombinatin(ind+1,arr,target,ans,temp);
}
vector<vector<int>>findcombinationSum(vector<int>&arr,int target){
      vector<vector<int>>ans;
      vector<int>temp;
      findCombinatin(0,arr,target,ans,temp);
      return ans;
}
int main(){

}