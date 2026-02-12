#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node (int d){
        data = d;
        next = NULL;
    }
};
void insertAtFront(node* &head,node* &tail,int data){
    if (head==NULL){
        head = tail = new node(data);

    }
    else{
        node *n = new node(data);
        n->next = head;
        head = n;
    }
}
void insertAtBack(node* &head,node* &tail,int data){
    if (head==NULL){
        head = tail = new node(data);
    }
    else{
        node *n = new node(data);
        tail->next = n;
        tail = n;
    }
}
int lengthll(node* head){
    int length=0;
    while (head!=NULL){
        head = head->next;
        length++;
    }
    return length;
}
void insertAtMid(node* &head,node* &tail,int data,int pos){
    if (pos==0){
        insertAtFront(head,tail,data);
    }
    else if (pos >=lengthll(head)){
        insertAtBack(head,tail,data);
    }
    else{
        node *temp = head;
        int i = 1;
        while (i!=pos-1)
        {
            temp = temp->next;
            i++;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}
void printll(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
void reversell(node* &head,node* &tail){
    node *c = head;
    node *p = NULL;

   while (c!=NULL){
    node *n = c->next;
    c->next =p;
    p = c;
    c = n;
   }
   swap(head,tail);
}
void deleteAtFront(node* &head,node *&tail){
    if (head==NULL){
        return;
    }
    else if (head->next){
        delete head;
        head = tail = NULL;
    }
    else{
        while (head!=NULL)
        {
            node *t = head;
            head = head->next;
            delete t;
        }
    }
}
void deleteAtBack(node* &head,node *&tail){
    if (head==NULL){
        return;
    }
    else if (head->next==NULL){
        delete head;
        head = tail = NULL;
    }
    else{
        node *t=head;
        while (t->next!=tail)
        {
            t=t->next;
        }
        delete tail;
        t->next=NULL;
        tail=t;
    }
}
void deleteAtMiddle(node* &head,node *&tail,int pos){
    if (pos==0){
        deleteAtFront(head,tail);
    }
    else if (pos==lengthll(head)){
        deleteAtBack(head,tail); 
    }
    else{
        node *t=head;
        for (int i = 0; i < pos-1; i++)
        {
            t=t->next;
        }
        node* n = t->next;
        t->next = n->next;
        delete n;
        
    }
}
// void reversellrec(node* c,){

// }
int main(){
    node* head= new node(1);
    node* tail = new node(2);
    head->next = tail;
    insertAtFront(head, tail,4);
    insertAtFront(head, tail,3);
    insertAtBack(head, tail,11);
    cout<<lengthll(head)<<endl;
    insertAtMid(head, tail,1000,5);
    
    printll(head);
    reversell(head,tail);
    printll(head);
    // deleteAtBack(head,tail);
    // deleteAtBack(head,tail);
    deleteAtMiddle(head,tail,2);
    printll(head);
    return 0;
}