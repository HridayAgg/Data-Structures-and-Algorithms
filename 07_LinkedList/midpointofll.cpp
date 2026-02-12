#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next; 
    node (int d){
        data = d;
        next = NULL;
    }
};
void printll(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
node* midll (node* head){
    if (head == NULL or head->next == NULL){
        return head;
    }
    node* f = head->next;
    node* s = head;
    while (f!=NULL and f->next != NULL)
    {
        f = f->next->next;
        s = s->next;
    }
    return s;
    
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
node* searchll(node* head,int target){
    if (head==NULL)
    {
        return NULL;
    }
    if (head->data == target) return head;
    return searchll(head->next,target);
    
}
node *mergell(node* a,node* b){
    if (a==NULL) return b;
    if (b==NULL) return a;
    node* nh;
    if (a->data < b->data){
        nh = a;
        nh->next =  mergell(a->next,b);
    }
    else if (a->data > b->data){
        nh = b;
        nh->next =  mergell(a,b->next);
    }
    return nh;
}
node *mergesort(node* head){
    if (head==NULL or head->next==NULL){
        return head;
    }

    node *a = head;
    node *m = midll(head);
    node *b = m->next;
    m->next = NULL;

    a = mergesort(a);
    b = mergesort(b);

    node *nh = mergell(a,b);
    return nh;
}
// node *bubblesort(node * head){
//     int length = lengthll(head);
//     node* p = NULL;
//     node* c = head ;
//     while (c!=NULL && c->next != NULL)
//     {
//         node* n = head->next;
//         if (c->data>n->data){
//             if (p==NULL)
//             {
                    
//             }
//             else{
//                 c->next = n->next;
//                 n->next = c;
//                 p = c;
//             }
//         }
        
//         else{
//             p=c;
//             c=n;
//         }
        
//     }
    
// }
node *kthelement(node *head,int k){
    node* s=head;
    node* f=head;
    for (int i = 0; i < k; i++)
    {
        f=f->next;
    }
    while (f!=NULL)
    {
        f=f->next;
        s=s->next;
    }
    return s;
    
    
}
bool isCylic(node* head){
    node *s = head;
    node *f = head;
    while (f!=NULL and f->next!=NULL)
    {
        if (f==s)
        {
            breakcyclic(head);
            return true;
        }
        return false;
    }
    
}
node *breakcyclic(node *head,node *f){
    node *s =head;
    node *fp =head;
    while (fp->next ! = f)
    {
        fp = fp->next;
    }
    while (f!=s)
    {
        fp = f;
        f = f->next;
        s=s->next;

    }
    fp->next = NULL
    
}
int main()
{
    node* head, *tail;
    node* head2, *tail2;
    head = tail = NULL;
    insertAtBack(head, tail, 31);
    insertAtBack(head, tail, 21);

    insertAtBack(head, tail, 14);
    insertAtBack(head, tail, 15);
    insertAtBack(head, tail, 16);
    insertAtBack(head, tail, 17);
    insertAtBack(head, tail, 18);
    insertAtBack(head, tail, 19);

    head2 = tail2 = NULL;


    insertAtBack(head2, tail2, 3);

    insertAtBack(head2, tail2, 5);
    insertAtBack(head2, tail2, 6);
    // midll(head);
    if (searchll(head,4)){
        cout<<"Found: "<<searchll(head,4)->data<<endl;
    }
    else{
        cout<<"Not found";
    }
    // node* ans = mergell(head,head2);

    // printll(ans);
    // node* a = midll(head);
    // cout<<a;
    // head = mergesort(head);
    printll(head);
    node* kthelementbefore = kthelement(head,4);
    cout<<kthelementbefore->data;
    return 0;
}