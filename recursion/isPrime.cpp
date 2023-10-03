#include<iostream>
using namespace std;


bool isPrime(int n){

    for(int i=2;i<n;i++){
            if(n%i!=0)
            return true;
            else 
            return false;
      }

}
int main()
{
    int n;
    cin>>n;

    int ans=isPrime(n);
    cout<<ans;

return 0;
}