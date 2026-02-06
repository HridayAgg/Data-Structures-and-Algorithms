#include<iostream>
using namespace std;

bool ratinmaze(char maze[][5],int i,int j,int m,int n,int sol[][10]){
    if (i==0 and j==n-1)
    {
        sol[i][j]=1;
        for (int row = 0; row < m; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cout<<sol[row][col]<<" ";
            }
            cout<<endl;
            
        }
        cout<<endl;
        return true;
        
    }

    sol[i][j]=1;    
    if (i+1<m and maze[i+1][j]!='X' and sol[i+1][j]!=1)
    {
        bool rightsemila = ratinmaze(maze,i+1,j,m,n,sol);
        if (rightsemila)    
        {
            return true;
        }
        
    }
    if (j+1<n and maze[i][j+1]!='X' and sol[i][j+1]!=1)
    {
        bool downsemila = ratinmaze(maze,i,j+1,m,n,sol);
        if (downsemila)    
        {
            return true;
        }
        
    }
    if (j-1>=0 and maze[i][j-1]!='X' and sol[i][j-1]!=1)
    {
        bool upsemila = ratinmaze(maze,i,j-1,m,n,sol);
        if (upsemila)    
        {
            return true;
        }
        
    }
    if (i-1>=0 and maze[i-1][j]!='X' and sol[i-1][j]!=1)
    {
        bool leftsemila = ratinmaze(maze,i-1,j,m,n,sol);
        if (leftsemila)    
        {
            return true;
        }
        
    }
    sol[i][j]=0;
    return false;
    
}


int main()
{
    char maze[][5]={
        "00X0",
        "X0X0",
        "X000",
        "00X0"
    };
    int sol[10][10]={0};
    ratinmaze(maze,0,0,4,4,sol);
    return 0;
}