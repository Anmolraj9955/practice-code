#include<iostream>
using namespace std;

void sort(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j =i+1; j<size; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int arr[10]={1,5,3,2,6,94,21,4,0,5};
    sort(arr, 10);
    for(int i=0; i<10; i++){
        cout<<arr[i];
    }
    }


