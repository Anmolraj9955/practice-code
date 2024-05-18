#include<iostream>
using namespace std;
#include<array>

int main(){
    array<int , 6> a = {1,2,3,4,5,6};
    int size = a.size();
    // for(auto i:a){
    //     cout<<i<<" ";
    // }
    for(int i = 0; i<size; i++){
        cout<<a[i]<<endl;
    }
}