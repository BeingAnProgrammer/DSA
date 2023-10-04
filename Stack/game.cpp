#include <iostream>
using namespace std;
const int n = 5;
int stack_arr[n];
int top = -1;
void push(int);
int pop();
bool isEmpty();
bool isFull();
int peek();
void display();
int main()
{
    int choice, data;
    while (1)
    {
        cout << "\n";
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print the top element" << endl;
        cout << "4. Print all the element of the stack" << endl;
        cout << "5. Quit" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter number to push into Stack: ";
        cin >> data;
        push(data);
        break;

    case 2:
        data = pop();
        cout << "Popped Element is: " << data << endl;
        break;

    case 3:
        cout << "Top Element in Stack : " << peek() << endl;
        break;

    case 4:
        cout << "All the elements of the stack are : " << endl;
        display();
        break;

    case 5:
        return 0;
        break;
    }
    }
 return 0;
}
bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
bool isFull()
{
    if (top == n - 1)
        return true;
    else
        return false;
}
void push(int x)
{
    if (isFull())
    {
        cout << "Overflow Condetion" << endl;
        return;
    }
    top++;
    stack_arr[top] = x;
}
int pop()
{
    if (isEmpty())
    {
        cout << "Underflow condition" << endl;
        return -1;  // Return -1 to indicate an error
    }
    int value;
    value = stack_arr[top];
    top--;
    return value;
}

int peek()
{
    if (isEmpty())
    {
        cout << "The stack is empty" << endl;
    }
    return stack_arr[top];
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << stack_arr[i] << " ";
    }
}