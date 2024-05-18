#include<iostream>
using namespace std;


int firstoccur(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans;
    while(start<=end){
        if(arr[mid]== key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start= mid+1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}

int lastoccur(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans;
    while(start<=end){
        if(arr[mid]== key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start= mid+1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}

int main(){
    int arr1[10]={1,2,3,3,3,3,3,4,5,6};
    int a = firstoccur(arr1,10,3);
    int b = lastoccur(arr1,10,3);
    cout<<"first occur"<<a<<endl;
    cout<<"second occur"<<b<<endl;
}