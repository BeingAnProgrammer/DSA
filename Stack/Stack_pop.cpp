#include<iostream>
using namespace std;

const int n=4;
int stack_arr[n];
int top=-1;
void push(int);
int pop();

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    int data;
    data=pop();

    cout<<data<<endl;
    for (int i = 0; i <= top; i++)
    {
    cout<<stack_arr[i]<<" ";
    }
    
return 0;
}

void push(int a){
    if (top==n-1)
    {
        cout<<"stack is full , overflow condetion"<<endl;
        return;
    }
    top++;
    stack_arr[top]=a;
}
int pop(){
    if(top==-1){
        cout<<"stack is empty , underflow condetion"<<endl;
        exit(1);
    }
    int value;
    value = stack_arr[top];
    top--;
    return value;
}