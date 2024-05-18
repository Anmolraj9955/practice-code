#include<iostream>
using namespace std;


bool pal(int i, string s){
    if(i>=s.length()/2) {return true;}
    if(s[i] != s[s.length()-i-1]){
        return false;
    }
    return pal(i+1, s);
    
        
    

}

int main(){
    // string s = " ";
    // cout<< "Enter a word"<<endl;
    // for(int i = 0; i<s.length(); i++){
    //     cin>>s[i];
    // }
    string s = "mam";
    cout<<pal(0, s);
}