#include<iostream>
using namespace std;


class queue{
    int *arr;
    int n;
    int cs;
    int f,e;
    public:
    queue(int s){
        n=s;
        arr = new int[n];
        cs=0;
        f=0;
        e=n-1;
    }
    int front (){
        return arr[f];
    }
    void push(int d){
    
        if (cs<n)
        {
            e = (e+1)%n;
            arr[e] = d;
            cs++;
        }
        else{
            cout<<"Overflow";
        }
        
    }
    void pop(){
    
        if (cs>0)
        {
            f = (f+1)%n;
            cs--;
        }
    
    }
        bool empty(){
            if (cs==0) return true;
            return false;
        }

};

int main()
{
    queue queue(5);
    
    queue.push(4);
    queue.push(6);
    queue.push(7);
    queue.push(8);
    queue.pop();
    queue.push(2);
    
    while (!queue.empty())
    {
        cout<<queue.front();
        queue.pop();
    }

    
    

    return 0;
}