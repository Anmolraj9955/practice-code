#include<iostream>
#include <vector>
using namespace std;

void add(int ind,int arr[],int s,vector<int>ds,int n,int sum){
      if(ind>=n){
        if(s==sum){
            for(auto i: ds){
                cout<<i<<" ";
            }
            cout<<endl; 
        }
        
        return;
      }
      ds.push_back(arr[ind]);
      s += arr[ind];
      add(ind+1,arr,s,ds,n,sum);
      ds.pop_back();
      s -= arr[ind];
      add(ind+1,arr,s,ds,n,sum);
}

int main(){
    int arr[]= {1,2,1};
    vector<int> ds;

    add(0,arr,0,ds,3,2);
    
}