#include<iostream>
using namespace std;

int main()
{
    int m,n,arr[100][100],num=1;
    cin>>m>>n;
    int sr=0,sc=0,er=m-1,ec=n-1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=num;
            num++;
        }
        cout<<endl;
       
    }
}