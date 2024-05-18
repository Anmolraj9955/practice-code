#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"top element is "<<s.top()<<endl;

    if(s.empty()){
        cout << "Stack empty" << endl;
    }
    cout<<s.size()<<endl;
}