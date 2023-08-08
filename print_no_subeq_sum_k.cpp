#include<bits/stdc++.h>
using namespace std;
void printf(int ind,vector<int>&ds,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum){
          for(auto it:ds){
            cout<<it<<" ";
          }   
          cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    //take 
    printf(ind+1,ds,s,sum,arr,n);
    s-=arr[ind];
    ds.pop_back();
    //not take
    printf(ind+1,ds,s,sum,arr,n);
}
//count of no of  subsequences with given sum
int count_subsequnce(int ind,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum) return 1;
        else return 0;
    }
    //ds.push_back(arr[ind]);
    s+=arr[ind];
    int l=count_subsequnce(ind+1,s,sum,arr,n);
    s-=arr[ind];
    //ds.pop_back();
    int r=count_subsequnce(ind+1,s,sum,arr,n);
    return l+r;
}
int main(){
      int arr[]={1,2,1};
      int n=3;
      int sum=2;
      vector<int>ds;
    printf(0,ds,0,sum,arr,n);
    cout<<count_subsequnce(0,0,sum,arr,n);

  return 0;
}