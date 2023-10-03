#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<"size of arr is "<<n<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
bool linearSearch(int arr[],int size,int key){
    print(arr,size);

    if(size==0)
    return false;

    if(arr[0]==key)
    return true;
    else{
        bool give=linearSearch(arr+1,size-1,key);
        return give;
    }



}
int main()
{
    int arr[6]={5,7,1,27,26,8};
    int size=6;

    int key=1;

    bool ans= linearSearch(arr,size,key);
    if(ans){
        cout<<"this key is present";
    }
    else{
        cout<<"this key is not present";
    }
return 0;
}