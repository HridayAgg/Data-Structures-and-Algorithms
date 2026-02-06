#include<iostream>
using namespace std;

void subsequence(char a[],int i,char op[],int j){
    if (a[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;
    }
    subsequence(a,i+1,op,j);
    op[j]=a[i];
    subsequence(a,i+1,op,j+1);
}
int main()
{
    char arr[]="abc";
    char op[100];
    subsequence(arr,0,op,0);

    return 0;
}