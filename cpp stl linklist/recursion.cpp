#include<iostream>
using namespace std;

void print(int i,int m){
    if(i<m)
    return;
    cout<<i<<" ";
    print(i-1,m);
}

int main(){
    int n;
    cin>>n;
    print(n,1);

}