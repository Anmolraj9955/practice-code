#include<iostream>
using namespace std;
#include<map>

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

void print(node* &head){
    node * temp = head;
    while(temp != NULL){
       cout<<temp->data<<" ";
       temp = temp->next;
    }
    cout<<endl;
}

int getlength(node* head){
    if(head == NULL){
        return 0;
    }
    int l = 0;
    node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

void insertathead(node* &head, int d){
    node* temp = new node(d);
    if(head == NULL){
        head = temp;
    }
    else{
        temp -> next = head;
        head = temp;
    }


}

void insertattail(node* &tail, int d){
    node* temp = new node(d);
    if(tail->next == NULL){
        tail->next =temp;
        tail = temp;
    }
}

void insertatgivenpos(node* &head, node* &tail, int pos, int d){
    int n = 1;
    node* temp = head;
    if (pos == 1){
        insertathead(head, d);
        return;
    }
    
    
    
    while( temp != NULL && n<pos-1){
       temp = temp -> next;
       n++;
    }

    if(temp ->next == NULL){
        insertattail(tail, d);
        return;
    }
    node* insertnode = new node(d);
    
    insertnode->next = temp -> next ;
    temp->next->prev = insertnode->next;
    temp->next = insertnode;
    insertnode->prev = temp;


}

void deletenode(node* &head, int pos){
    node* curr = head;
    node* prev = NULL;
    if(head == NULL){
        return;
    }
    int n = 1;
    while(n<pos){
        prev = curr;
        curr = curr->next;
        n++;
    }
    prev->next = curr->next;
    prev->next->prev = prev;
    curr->next = NULL;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);

    // cout<<getlength(head)<<endl;

    insertathead(head, 5);
    print(head);

    insertattail(tail, 20);
    print(head);

    insertatgivenpos(head, tail, 3, 15);
    print(head);

    deletenode(head, 3);
    print(head);
    
}