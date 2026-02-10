#include<iostream>
using namespace std;

void helloworld(){
    cout<<"helloworld";
}
int add(int x,int y){
    return x+y;
}
int main()
{
    cout<<add(4,2);
    helloworld();
    return 0;
}   