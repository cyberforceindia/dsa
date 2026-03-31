#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;
    List()
    {
        head=tail=NULL;
    }


    void push_front(int val)
    {
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    void pushBack(int val){
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void popFront()
    {
        if(head==NULL)
        {
            cout<<" L.L is empty\n";
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }

    void popBack(){
        if(head==tail)
        {
            cout<<"ll is empty \n";
            return;
        }
        else{
            Node* temp=head;
            while(temp->next != tail )
            {
                temp=temp->next;
            }

            temp->next=NULL;
            delete tail;
            tail=temp;
        }
    }

    void printll()
    {
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    List ll;
    ll.push_front(34);
    ll.push_front(20);
    ll.pushBack(43);
    ll.printll();
    ll.popFront();
    ll.printll();
    ll.popBack();
    ll.printll();
}
