#include<iostream>
using namespace std;

int fact(int a){

   if(a==0 || a==1)
   return 1;
   else
   return a*fact(a-1);

}


int nCr(int n,int r){
   
   int num =fact(n);
   int denom=fact(r)*fact(n-r);
   return  num/denom;

}
int main()
{    
    int n,r;
    cout<<"Enter values of n and r = \n";
    cin>>n>>r;

    cout<<nCr(n,r);

return 0;
}