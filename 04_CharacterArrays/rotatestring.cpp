#include<iostream>
using namespace std;
void rotatestring(char str[],int k){
    int i=0;
    int j=strlen(str);
    k=k%j;
    while (i>0)
    {
        str[i+k]=str[j];
        i--;
        j--;
    }
    
}
void reversestring(char str[],int i,int j){
    while (i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    
}
int main()
{
    int k=4;
    char str[]="Coding";
    int len=strlen(str)-1;
    reversestring(str,0,len);
    reversestring(str,0,k-1);
    reversestring(str,k,len);
    cout<<str;
    return 0;
}