#include<iostream>
using namespace std;

int main()
{
    int n;
    int c=0;
    int bit=30;//30 coz int has 32 bits, 1 is sign bit so 30 iterations 
               //to shift
    cin>>n;
    while (bit>=0){
         if((1<<bit)&n){
            cout<<1;
            c++;
         }
         else{
            cout<<0;
         }
        bit--;
    }
    cout<<endl<<c;
    return 0;
}