#include<iostream>
using namespace std;

char arr[][10]={
    "zero","one","two","three","four","five","six","seven","eight","nine"
};

void inttochar(int n){
    if (n==0){
        return ;
    }
    int l = n%10;
    inttochar(n/10);
    cout<<arr[l]<<" ";

}

int main()
{
    inttochar(1121 );
    return 0;
}