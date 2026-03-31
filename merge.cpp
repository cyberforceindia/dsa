#include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e)
{
    int i = s;
    int j = mid + 1;
    int k = 0;

    int temp[100];   // temporary array

    // merge two sorted parts
    while(i <= mid && j <= e)
    {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // remaining elements
    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= e)
        temp[k++] = arr[j++];

    // copy back to original array
    for(int x = 0; x < k; x++)
        arr[s + x] = temp[x];
}

void mergeSort(int arr[], int s, int e)
{
    if(s >= e) return;

    int mid = (s + e) / 2;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);

    // merge both
    merge(arr, s, mid, e);
}

int main()
{
    int arr[] = {5, 2, 8, 3, 1};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
