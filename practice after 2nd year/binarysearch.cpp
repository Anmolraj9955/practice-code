#include<iostream>
using namespace std;



int search(int array[],int size,int key){
    int start = 0;
    int end = size-1;

    // int mid = (start+end)/2;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[5]={1,3,5,7,9};
    int arr1[8] = {2,4,6,8,10,12,14,18};

    int index;

    index  = search(arr1, 8, 18);
    cout<<"key is at "<<index<<endl;

}