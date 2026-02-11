#include <iostream>
using namespace std;
void merge(int *a, int *b, int *c, int s, int e)
{
    int mid = (s + e) / 2, i = s, j = mid + 1, k = s;
    while (i <= mid and j <= e)
    {
        if (b[i] > c[j])
        {
            a[k++] = c[j++];
        }
        else
        {
            a[k++] = b[i++];
        }
    }
    while (i <= mid)
    {
        a[k++] = b[i++];
    }
    while (j <= e)
    {
        a[k++] = c[j++];
    }
}
void mergesort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    int b[10000], c[10000];
    for (int i = s; i < mid + 1; i++)
    {
        b[i] = a[i];
    }
    for (int i = mid + 1; i <= e; i++)
    {
        c[i] = a[i];
    }
    mergesort(b, s, mid);
    mergesort(c, mid + 1, e);

    merge(a, b, c, s, e);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}