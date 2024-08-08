#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int a = m - l + 1;
    int b = r - m;

    int A[a], B[b];

    for (int i = 0; i < a; i++)
    {
        A[i] = arr[l + i];
    }
    for (int j = 0; j < b; j++)
    {
        B[j] = arr[m + 1 + j];
    }
    int p = 0, q = 0, k = l;
    while (p < a && q < b)
    {
        if (A[p] <= B[q])
        {
            arr[k] = A[p];
            p++;
            k++;
        }
        else
        {
            arr[k] = B[q];
            k++;
            q++;
        }
    }
    while (p < a)
    {
        arr[k] = A[p];
        k++;
        p++;
    }
    while (q < b)
    {
        arr[k] = B[q];
        k++;
        q++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    else
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{

    int arr[] = {4, 1, 3, 9, 7};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
