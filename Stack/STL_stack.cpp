#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(2);
    st.push(34);
    st.push(54);
    st.push(65);
    st.pop();
    st.push(99);

  
    cout << "Top element: " << st.top() << endl;
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;
    cout << "Stack size: " << st.size() << endl;

return 0;
}