 #include<iostream>
 using namespace std;
 #include<map>

 class node{
    public:
    int data;
    node * next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        if(this->next != NULL)
        this->next = NULL;
    }
 };

 void insertathead(node* &head, int d){
        node* temp = new node(d);
        temp ->next = head;
        head = temp;
 }
 void insertattail(node* &tail,int d){
    node * temp = new node(d);
    tail->next = temp;
    tail = temp;
 }

 void print(node* head){
    if(head == NULL){
        cout<<"the list is empty "<<endl;
    }
    else {
        node * temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;

        }
    }
 }
 void insertatgivenposition(node * &head,node* &tail, int pos, int d){
  
   

    node * temp = head;
    int n = 1 ;
    while(n<pos-1){
        temp = temp ->next;
        n++;
    }
     if(pos==1){
    insertathead(head, d);
    return;
   }

    else if(temp->next == NULL){
        //inserting at the end of linkedlist.
        insertattail(tail, d);
        return;
    }

    node * insnode = new node(d);
    insnode -> next = temp ->next;
    temp->next = insnode;

    

 }

 void deletenode(int pos,node* &head){
    // node*temp = head;
    // int n =1;
    // while(n<pos-1){
    //     temp = temp->next;
    //     n++;
    // }
    // temp->next = temp->next->next;

    int n = 1;
    node* curr = head;
    node* prev = NULL;
    
    if(pos == 1){
      node* temp = head;
      temp = temp->next;
      delete temp;
    }
    else{
        while(n<pos){
            prev = curr;
            curr = curr->next;
            n++;
        }
        
        prev->next=curr->next;
        delete curr;
    }

 }

 node* reversell(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;

    };
    return prev;
    
 }

bool detectloop(node* head) {

    if(head == NULL)
        return false;

    map<node*, bool> visited;

    node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            cout << "Present on element " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}
// bool floydsdetectloop(node* head){
//     node* slow = head;
//     node* fast = head;
//     while(fast->next != NULL && slow != NULL){
        
//         fast = fast->next->next;
//         slow = slow->next;

//         if(slow == fast){
//             cout<<"present at "<<slow->data<<endl;
//             return true;
//         }
//     }
//     return false;
// }


node* floydsdetectloop(node* head) {

    if(head == NULL)
        return NULL;

    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout << "present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;

}

node* begnode(node* head){
    // node* slow = head;
    // node* fast = head;
    // while(fast->next != NULL && slow != NULL){
        
    //     fast = fast->next->next;
    //     slow = slow->next;

    //     if(slow == fast){
    //         cout<<"first point of intersection "<<slow->data<<endl;
    //         slow = head;
    //         while(slow != fast){
    //             slow = slow->next;
    //             fast = fast->next;


    //         }
    //        cout<< "poi is at node "<<slow->data<<endl;
    //        break;
    //     }
    // }
    if(head == NULL){
        return NULL;
    }
    node* firstpoi = floydsdetectloop(head);
    node* slow = head;
    while(firstpoi != slow){
    firstpoi = firstpoi->next;
    slow = slow->next;
    }
    return slow;

}

void removeloop(node* head){
    if(head == NULL){
        return ;
    }
    node* startingpoi = begnode(head);
    node* temp = startingpoi;
    while(temp->next != startingpoi){
        temp = temp->next;
    }
    temp->next = NULL;
}

 int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    cout<< node1->data <<endl;
    cout<< node1->next <<endl;
    insertathead(head, 20);

    insertattail(tail, 30);

    
    
    insertatgivenposition(head, tail, 1, 40);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    print(head);

    // deletenode(2, head);
    cout<<endl;
    print(head);
    cout<<endl;

    tail->next = head->next;
    
    // node* prev=reversell(head);
    // print(prev); 
      

    if(detectloop(head)){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"NOt present"<<endl;
    }

    floydsdetectloop(head);

    node* loop = begnode(head);
    cout<<"starting intersection "<<loop->data<<endl;

    removeloop(head);
    print(head);
 } 