#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    cout << "Enter the size of array = " << endl;
    int n;
    cin >> n;
    cout << "ENter the elements of array = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1]){
            swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}