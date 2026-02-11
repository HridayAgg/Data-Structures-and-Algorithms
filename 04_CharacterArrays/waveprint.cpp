#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[100][100];
    int r,c,num=1;
    cin>>r>>c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j]=num++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    for (i = 0; i < c; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < r; j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for (int j = r-1; j >= 0; j--)
            {
                cout<<arr[j][i]<<" ";
            }
            
        }
        
    }
    
    return 0;
}