#include<iostream>
using namespace std;

class stack{
    public:
    int top;
    int * arr;
    int size;

    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }


    void push(int data){
        if(size-(top-1) >0){
           top++;
           arr[top] = data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    int pop(){
        if(top == -1){
            cout<<"stack underflow"<<endl;
        }
        else{
        return arr[top];
           top--;

        }
    }
    int peak(){
        if(top== -1)
        cout<<"stsck empty"<<endl;
        else{
        return arr[top];
        }
    }
    bool empty(){
        if(top == -1){
           return true;
        } 
        else{
            return false;
        }


};

int main(){
    stack s1(5);
    s1.push(10);
    s1.push(9);
    s1.push(8);
    s1.push(7);

    cout<<s1.peak()<<endl;

}