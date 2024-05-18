//using double pointer

#include<iostream>
using namespace std;

void rev(int arr[],int l,int r){
     if(l>=r)
     return;
     swap(arr[l],arr[r]);
     rev(arr,l+1,r-1);
     
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    rev(a,0,n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
}