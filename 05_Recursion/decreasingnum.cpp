#include<iostream>
using namespace std;
void decnums(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    decnums(n-1);
}
int main()
{
    decnums(5);
    return 0;
}