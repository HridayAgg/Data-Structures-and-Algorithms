#include<iostream>
using namespace std;
int factorial(int n){
    int p=1;
    for (int i = 1; i <= n; i++)
    {
        p=p*i;
    }
    return p;
}
int ncr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));

}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}