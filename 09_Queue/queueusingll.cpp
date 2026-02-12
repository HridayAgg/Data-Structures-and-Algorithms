#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    }
};
class Queue{
    node* head,*tail;
    public:
        Queue() head = tail = NULL;
        void push(int d){
            if (head==NULL)
            {
                head = tail = new node(d);
            }
            else{
                node *n = new node[n];
                tail->next = n;
                tail = n;
            }
            
        }
        void pop(){
            if (head==NULL){
                return;
            }
            else if (head->next == NULL){
                head = tail = NULL;
            }
            else{
                node *t = head;
                head = head->next;
                delete t;
            }
        }
        void front(){
            
        }
        bool empty(){
            return (head==NULL)
        }
}

int main()
{
    Queue q();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (!q.empty())
    {
        q.front();
        q.pop();
    }
    
    return 0;
}