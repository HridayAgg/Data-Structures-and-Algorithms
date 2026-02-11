#include <iostream>
using namespace std;
void bubblesort(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return;
    }
    for (int j = 0; j < n-i; j++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        bubblesort(arr, n, i + 1);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    bubblesort(arr, 5, 0);
    for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    return 0;
}