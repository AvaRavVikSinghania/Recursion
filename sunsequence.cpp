#include<bits/stdc++.h>
using namespace std;
void f(int i,int arr[],vector<int>&ds,int n){
  if(i==n) {
    for(auto it:ds){
        cout<<it<<" ";
    }
    cout<<endl;
    return;
  }
  ds.push_back(arr[i]);
    f(i+1,arr,ds,n);
  ds.pop_back();
    f(i+1,arr,ds,n);

}
int main(){
   int arr[]={1,2,3,4};
   int n=4;
   vector<int>ds;
   f(0,arr,ds,4); 
   return 0;
}