#include<iostream>
using namespace std;
int binarySearchh(int arr[],int size, int target)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end)
    {
        
        int value=arr[mid];
        if(target==value){
            return mid;
        }
        else if(target<value)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }

         mid=(start+end)/2;
    }
    return -1;

}
int main()
{
    int arr[]={1,3,4,6,7,9,11};
    int size=7;
    int target=8;

    int indexx=binarySearchh(arr,size,target);
    {
        if(indexx==-1)
        {
            cout<<"Element Not found";
        }
        else{
            cout<<"found at index"<<indexx;
        }
    }
}
