#include<iostream>
using namespace std;

int main()
{
    int r=3,c=3;
    int matrix[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target=5;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j]==target)
            {
                cout<<"Found at "<<i<<","<<j;
                return 0;
            }
            
        }
        
    }
    
    return 0;
}