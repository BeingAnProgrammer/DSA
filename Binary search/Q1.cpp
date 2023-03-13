
// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549


#include <iostream>
using namespace std;

int firstElement(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastElement(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int arr[1000];
    int key;
    int n;

    cout << "Enter the size of array = " << endl;
    cin >> n;
    cout<<"Enter the value of key = "<<endl;
    cin>>key;
    cout << "Enter the elements of array = " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int firstNo = firstElement(arr, n, key);
    int lastNo = lastElement(arr, n, key);

    cout << "First element of the array is = " << firstNo << endl;
    cout << "Last element of the array is = " << lastNo << endl;

    return 0;
}