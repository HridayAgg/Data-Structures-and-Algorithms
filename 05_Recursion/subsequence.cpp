#include<iostream>
using namespace std;

void Subsequence(char ip[],int i,char op[],int j){
    if (ip[i]=='\0')
    {
        op[j]='\0';
        cout<<op<<endl;
        return;
    }
    Subsequence(ip,i+1,op,j);
    op[j]=ip[i];
    Subsequence(ip,i+1,op,j+1);
    
}

int main()
{
    char ip[]="abc";
    char op[100];
    Subsequence(ip,0,op,0);
    return 0;
}