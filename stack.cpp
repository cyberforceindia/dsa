#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int ele)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=ele;
        }
        else{
            cout<< "Stack overflow";
        }

    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"Stack Underflow";
        }

    }

    int peek()
    {
        if(top>=0)
        {
            return arr[top];

        }
        else{
            cout<<"Stack is empty ";
            return -1;
        }

    }
};

int main()
{
    Stack s(2);
    s.push(34);
    s.push(65);
    s.push(3);
    s.pop();
    s.pop();
    s.pop();

}
