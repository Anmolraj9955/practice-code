#include<iostream>
using namespace std;

void rev(int arr[],int i, int n){
    if(i>=n/2)
    return;
    swap(arr[i], arr[n-1-i]);
    rev(arr,i+1,n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    rev(a,0,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}