#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int hash[26]= {0};
    for(int i=0; i<s.length(); i++){
        hash[s[i]-'a'] += 1;
    }
    int q;
    cout<<"enter q"<<endl;
    cin>>q;
    while(q--){
        char x;
        cin>>x;
        cout<<hash[x-'a']<<endl;
    }
}