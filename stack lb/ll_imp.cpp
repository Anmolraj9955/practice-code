#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;

};
class stack{
    node* top;
    public:
    stack(){
        top = nullptr;
    }
    ~stack(){
        node* p = top;
        while(top!=nullptr){
          top = top->next;
          delete p;
          p = top;
        }
    }
    void push(int data){
        node* temp = new node(data);
        if(top == nullptr){
          top = temp;
        }
        else{
            temp->next = top;
            top = temp;

        }
    }
    int pop(){
        if(top == nullptr){
            cout<<"stack is empty"<<endl;
            return -1;

        }
        else{
            node* p = top;
            int x = p->data;
            delete p;
            top = p->next;


        }

    }
    int main(){
        stack s1;
        s1.push(20);
        s2.push(30);
        
    }
}