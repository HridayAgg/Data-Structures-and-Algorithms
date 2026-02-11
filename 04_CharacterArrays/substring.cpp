#include<iostream>
using namespace std;

void allsubstring(char str[]){
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(str); j++)
        {
            for (int k = i; k < j; k++)
            {
                
                cout<<str[k];
            }
            cout<<endl;
            
        }
    }
    
}

int main()
{
    char str[]="abcd";
    // cout<<substring(str,0,4);
    allsubstring(str);
    return 0;
}