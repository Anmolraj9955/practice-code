#include<iostream>
using namespace std;

void rev(string nam,int l,int r){
     if(l>=r)
     return;
     swap(nam[l],nam[r]);
     rev(nam,l+1,r-1);
     
}


int main(){
    string name = " ";
    int n = name.length();
    for(int i=0; i<n; i++){
        cin>>name[i];
    }
    string nam1 = name;
    rev(name,0,n-1);
    for(int i=0; i<n; i++){
        cout<<name[i]<<endl;
    }
    if(name == nam1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
    
}