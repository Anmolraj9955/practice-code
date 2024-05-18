#include<iostream>
#include <vector>
using namespace std;

int add(int ind,int arr[],int s,int n,int sum){
      if(ind>=n){
        if(s==sum){
            return 1; 
        }
        else{
        return 0;}
      }
      
      s += arr[ind];
      int l = add(ind+1,arr,s,n,sum);
      s -= arr[ind];
      int r = add(ind+1,arr,s,n,sum);
      return l+r;
}

int main(){
    int arr[]= {1,2,1};

    cout<<add(0,arr,0,3,2);
    
}