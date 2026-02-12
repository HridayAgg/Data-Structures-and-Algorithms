#include<iostream>
using namespace std;

class Stack{
public:
Stack(){
    head = NULL;
}
void push(int d){
    node *n = new node(int d);
    d->next = head;
    head = d;
}

void pop(){
    if (head==NULL){
        return;
    }
    else if (head->next==NULL){
        delete head;
        head = NULL;
    }
    else{ 
        node *t = head;
        head->next = t;
        delete t;
    }
}
void top(){
    return head;
}
void empty(){
    return head ==NULL;
}
};

int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}