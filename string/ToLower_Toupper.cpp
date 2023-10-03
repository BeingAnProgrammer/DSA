#include <iostream>
using namespace std;

void makeSmall(char ch[], int n)
{

    for (int i = 0; i < n; i++)
    {
        ch[i]=tolower(ch[i]);
    }
}
int getLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    cout << "Enter a name " << endl;
    char ch[40];
    cin >> ch;

    cout << ch << endl;
    int n = getLength(ch);
    makeSmall(ch, n);
    cout<<"After conversion we have = "<<ch;

    return 0;
}