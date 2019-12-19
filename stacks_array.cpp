#include <iostream>
using namespace std;
#define MAX 10000

class stack
{
    int top;

    public:
        stack()
        {
            top =-1;
        }
        int array_Stack[MAX];
        void push(int x);
        bool is_empty();
        int pop();
        int peek();


};
int stack::pop()
{
    if(top <0)
    {
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else
    {
        int p = array_Stack[top --];
        return p;
    }
    
}
void stack::push(int x)
{
    if(top >= (MAX -1))
    {
        cout<<"Overlfow"<<endl;
    }
    else
    {
        array_Stack[++top] = x;
        cout<<"Pushed the following item into the stack:  "<<x<<endl;
    }
    
}

bool stack::is_empty()
{
    if(top ==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int stack::peek()
{
    if(top==-1)
    {
        cout<<"the stack is currently empty"<<endl;
        return 0;
    }
    else
    {
        int tp = array_Stack[top];
        return tp;
    }
    
}

int main()
{
    stack n;
    n.push(22);
    n.push(222);
    cout<<n.pop()<<"   Poppped"<<endl;
    cout<<n.peek()<<" This is the top element"<<endl;
    return 0;

    
}