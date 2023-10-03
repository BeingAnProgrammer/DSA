#include<iostream>
using namespace std;

int main()
{
    int n=101;

    int* temp=&n;

    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<temp<<endl;
    cout<<*temp<<endl;

return 0;
}