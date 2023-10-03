#include<iostream>
using namespace std;

const int n=4;
int stack_arr[n];
int top=-1;
void push(int);
int pop();
int isFull();
int isEmpty();
int peek();
void display();
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    int data;
    data=pop();
    cout<<data<<endl;
    display();
    cout<<"\n"<<peek();

return 0;
}
int isFull(){
    if(top==n-1)
    return 1;
    else
    return 0;
}
int isEmpty(){
    if(top==-1)
    return 1;
    else
    return 0;
}
void push(int data){
    if(isFull()){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    stack_arr[top]=data;
}
int pop(){
    if (isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    int value;
    value =stack_arr[top];
    top--;
    return value;
}
void display(){
    for (int i = top; i >=0; i--)
    {
        cout<<stack_arr[i]<<" ";
    }
}
int peek(){
    return stack_arr[top];
}