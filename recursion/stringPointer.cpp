#include<iostream>
#include<string>
using namespace std;

int main()
{
    string cars = "tesla";
    string* prt =&cars;

    cout<<cars<<endl;
    cout<<&cars<<endl;
    cout<<prt<<endl;
    cout<<*prt<<endl;

return 0;
}