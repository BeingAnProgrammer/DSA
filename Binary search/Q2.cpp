#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the size of the array = "<<endl;
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements of the array = "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int swap;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
            
            
        }
        
    }
    cout<<"After swap = "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

return 0;
}