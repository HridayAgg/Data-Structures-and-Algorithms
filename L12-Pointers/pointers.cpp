#include<iostream>
using namespace std;

int main()
{
    int a=5;
    float b=1.11;
    cout<<sizeof(a);
    cout<<sizeof(b);
    int n=5;
    int *num=&n;
    cout<<num;
    return 0;
}