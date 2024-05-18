#include<iostream>
using namespace std;
#include<map>

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        this->next = NULL;
    }
};

void insertnode(node* &tail, int element, int d){
    
    if(tail == NULL){
         node* newnode = new node(d);
         tail = newnode;
         newnode->next = newnode;
         
         
    }
    
    else{
        node* temp = tail;
        while (temp -> data != element)
        {
            temp = temp->next;

        }
        node* insertnode = new node(d);
        insertnode->next = temp->next;
        temp->next = insertnode;

    }   
    
}

void print(node* &tail){
    node* temp = tail;
    if(tail == NULL){
        cout<<"list empty";
        return;
    }
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
     
}

void deletenode(node* &tail, int element){
    if(tail == NULL){
        cout<<"empty";
        return;

    }
    
    else{
        node* prev = tail;
        node* curr = prev->next;
    
        while(curr->data != element){
         prev = curr;
         curr = curr->next;
        }
          prev->next = curr->next;
          //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
          curr->next = NULL;
          delete curr;
         
        

    }
}




int main(){
    node* tail = NULL;
    insertnode(tail, 3, 1);
    insertnode(tail, 1, 2);
    insertnode(tail, 2, 3);
    insertnode(tail, 3, 4);
    insertnode(tail, 4, 5);
    print(tail);
    insertnode(tail, 5, 6);
    print(tail);
    insertnode(tail, 6, 7);
    print(tail);
    deletenode(tail, 7);
    print(tail);
    //dettect looop
    
}