#include<iostream>
using namespace std;

void swapalt(int arr[], int n){
    for(int i = 0; i<n; i++){
        if(i%2 == 0){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    swapalt(arr,n);
}