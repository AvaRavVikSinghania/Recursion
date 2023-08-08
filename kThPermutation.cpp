#include<bits/stdc++.h>
using namespace std;
string getPermutation(int n,int k){
    int fact=1;
    vector<int>numbers;
    //computing factorial
    for(int i=1;i<n;i++){
        fact=fact*i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    string ans="";
    k=k-1;//for 0 base indexing
    while(true){
        ans=ans+to_string(numbers[k/fact]);
        numbers.erase(numbers.begin()+k/fact);//remove the numbers
        if(numbers.size()==0) break;
        k=k%fact;
        fact=fact/numbers.size();
    }
    return ans;
}
int main(){

}