#include <iostream>
using namespace std;

int isSorted(int arr[], int size)
{

  if (size == 0 || size == 1)
    return true;

  if (arr[0] > arr[1])
    return false;
  else
  {
    int restArr = isSorted(arr + 1, size - 1);
    return restArr;
  }
}
int main()
{

  int arr[5] = {2, 4, 1, 6, 7};

  int size = 5;

  bool ans = isSorted(arr, size);

  if (ans)
  {
    cout << "Array is sorted";
  }
  else
  {
    cout << "Array is not sorted";
  }
  return 0;
}