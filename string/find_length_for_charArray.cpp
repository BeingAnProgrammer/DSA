#include<bits/stdc++.h>
using namespace std;

int getlength(char name[]){
    int coutn=0;
    for(int i=0;name[i]!='\0';i++){
        coutn++;
    }
    return coutn;
}
int main()
{

    char name[59];
    cout<<"Enter a name"<<endl;
    cin>>name;

    int n=getlength(name);
    cout<<n;

return 0;
}