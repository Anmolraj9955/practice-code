#include<iostream>
using namespace std;

int main(){
    int m; int n; 
    int rev=0;
    cout<<"enter a number wanna has to check"<<endl;
    cin>>m;
    n = m;
    //1221

    while(n>0){
        int rem;
        rem = n%10;
        n = n/10;
        rev = rev*10 + rem;
    }
    cout<<rev<<endl;
    if(m == rev){
        cout<<"PAlindrone\n";

    }
    else{cout<<"not palindrome\n";}


}