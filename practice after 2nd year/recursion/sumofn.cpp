#include<iostream>
using namespace std;

void sumofn(int i,int sum){
    if(i<1){
        cout<<"sum is "<<sum<<endl;
        return;
    }
    sumofn(i-1,sum + i);
}

int main(){
    int i,sum=0;
    cin>>i;
    sumofn(i,sum);
    
}