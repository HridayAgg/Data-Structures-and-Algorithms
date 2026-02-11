#include<iostream>
using namespace std;

bool isPermutation(char a[],char b[]){
    int freq[26]={};
    for (int i = 0; a[i]!='\0'; i++)
    {
        int index=a[i]-'a';
        freq[index]++;
    }
    for (int i = 0; b[i]!='\0'; i++)
    {
        int index=b[i]-'a';
        freq[index]--;
    }
    for (int i = 0; i<26; i++)
    {
        if(freq[i]!=0) return false;
    }
    return true;
    
}

int main()
{
    char a[]="cbdea";
    char b[]="acbde";
    if (isPermutation(a,b))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}