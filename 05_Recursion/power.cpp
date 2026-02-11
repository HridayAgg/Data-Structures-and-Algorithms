#include<iostream>
using namespace std;
int powerfn(int a,int pow){
    if (pow==1) return a;
    return powerfn(a,pow-1) *a;
}
int main()
{
    cout<<powerfn(5,3);
    return 0;
}