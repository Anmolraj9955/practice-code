#include<iostream>
#include <vector>
using namespace std;

void print(int ind, int arr[], vector<int> ds,int n){
    if(ind>=n){
        for(auto i:ds){
            cout<<i<<" ";
       }
       cout<<endl;
       return;
    }
    ds.push_back(arr[ind]);
    print(ind+1, arr, ds,n);

    ds.pop_back();
    print(ind+1, arr, ds,n);
}

int main(){
    
    int arr[] = {3,1,2};
    vector<int>ds;
    print(0,arr,ds,3);
    return 0;
}