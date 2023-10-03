#include<iostream>
using namespace std;

const int n=5;
int stack_arr[n];
int top=-1;
void push(int);


int main()
{
    push(1);
    push(22);
    push(36);
    push(8);
    push(9);

    cout<<"The inserted elements of the stack are"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<stack_arr[i]<<" ";
    }
    
return 0;
}

void push(int a){
    if(top==n-1){
        cout<<"Stack is full i.e, overflow condetion";
        return;
    }

    top++;
    stack_arr[top]=a;
}
