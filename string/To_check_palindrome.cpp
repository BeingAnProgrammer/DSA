#include <iostream>
using namespace std;


char reverseIt(char name[], int n){
         int left=0;
         int right=n-1;
         while(left<right){
            swap(name[left++],name[right--]);
         }
}
int getLength(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[50];
    cout << "Enter your Name: "<<endl;
    cin >> name;
    string name1=name;
    cout<<"Your name is = "<<name<<endl;
    int n = getLength(name);
    
    //calling the function to reverse string
    reverseIt(name,n);
    cout<<name;
    int count1=0;
    for(int i=0;i<n;i++){
        if(name1[i]==name[i])
        count1++;
         }

         if(n==count1){
            cout<<"\nIts palendrome"<<endl;
          } else{
        cout<< "\nIts not ";
          }

    return 0;
}