#include<bits/stdc++.h>
using namespace std;


string reverseName(string name, int n){
   
   int left=0;
   int right=n-1;
   while(left<right){
     swap(name[left++],name[right--]);
   }


}
int main()
{
    
    string name;
    cout<<"Enter a name:\n";
    cin>>name;
    int n=name.size();
   
    reverseName(name,n);
    cout<<name;


return 0;
}

