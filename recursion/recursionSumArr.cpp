#include<iostream>
using namespace std;


int sumArr(int arr[], int size){

     if(size==0)
     return 0;


     if(size==1)
     return arr[0];
     else
     {
        return arr[0]+sumArr(arr+1,size-1);
     }
}

int main()
{
    int arr[5]={4,6,2,7,8};
     int size=5;

     int ans=sumArr(arr,size);

     cout<<"The sum of values of array is equal to = "<<ans;



return 0;
}