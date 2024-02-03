//Reverse a stack using recursion
#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st,int ele)
{
    if(st.empty())
    {
    st.push(ele);
    return;
    }
    int top = st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(top);

}
void reversestack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int top = st.top();
    st.pop();
    reversestack(st);
    insertAtBottom(st,top);
    return;
}


int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reversestack(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
