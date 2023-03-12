//basic code for binary search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){


    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
           start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
    
}
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of an arrray = "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter a key = "<<endl;
    cin>>key;
    int rvnk = binarySearch(arr,n,key);
    cout<<endl;

    cout<<"Index of "<<key<<" is = "<<rvnk;

return 0;
}
