#include<iostream>
#include<queue>
using namespace std;

class Stack(){
    queue<int> q1;
    queue<int> q2;
public:
    void push(int d){
        if (q1.empty() and q2.empty()) q1.push(d);
        else if (q1.empty()) q2.push(d);
        else q1.push(d);
    }
    void pop(){
        if 
    }
    void top(){
        if (q1.empty() and !q2.empty()) {
            while (q2.size()>1)
            {
                int f = q1.front();
                q1.push(d);
                q2.pop();
            }
            int top = q2.front();
            q2.pop();
            q1.push(top);
            return top;
        else {
            while (q1.size()>1)
            {
                int f = q2.front();
                q2.push(d);
                q1.pop();
            }
            int top = q1.front();
            q1.pop();
            q2.push(top);
            return top;
        }
        }
    }
    bool empty(){

    }
}

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    return 0;
}