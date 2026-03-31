#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,6,3,7,2,8};
    int n=6;
    

    for(int i=0;i<n-1;i++)
    {
        int mn=INT_MAX;
    int mindx=-1;
        for(int j=i;j<n;j++)
        {
            if(mn>arr[j])
            {
                mn=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
