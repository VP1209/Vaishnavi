#include<iostream>
using namespace std;

const int SIZE=5;
class Stack{
private:
    int top;
    int nodes[SIZE];

    bool isEmpty()
    {
        return(top==-1);
    }
    bool isFull()
    {
        return(top==SIZE-1);
    }
public:
    Stack()
    {
        top=-1;
    }
    void push(int ele)
    {
       if(isFull()){
        cout<<"\n stack overflow....";
        return;
       }
     top++;
     nodes[top]=ele;
    }
    void pop()
    {
        int ele;
        if(isEmpty()){
            cout<<"\n stack underflow......";
            return;
        }
        ele=nodes[top];
        top--;
        cout<<endl<<ele<<"poped!!!";
    }
    int peek()
    {
        return nodes[top];
    }
    void traverse()
    {
        if(isEmpty())
        {
            cout<<"\n stack is empty....";
        }
        else
        {
            cout<<"\n stack elements are :\n";
            for(int i=top;i>=0;i--)
            {
                cout<<endl<<nodes[i];
            }
        }

    }
};
int main()
{
    Stack st;

    st.push(50);
    st.traverse();
    st.pop();
    st.pop();
    st.push(44);
    st.push(45);
    st.push(64);
    st.push(84);
    st.push(61);
    st.traverse();
    st.peek();
}
