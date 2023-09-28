#include <iostream>
using namespace std;

void insertionShot(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorted array is " << endl;
    insertionShot(arr, n);
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}