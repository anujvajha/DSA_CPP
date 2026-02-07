#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DLL 
{
    Node* head;
    Node* tail;

    public:
    DLL () 
    {
        head = tail = NULL;
    }

    // all push and pop operations - O(1)
    void push_front (int val)
    {
        Node* newnode = new Node(val); 
        if(head==NULL) 
        {
            head=tail=newnode;
            return;
        }
        else 
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    void push_back (int val)
    {
        Node* newnode = new Node(val); 
        if(head==NULL) 
        {
            head=tail=newnode;
            return;
        }
        else 
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void pop_front () 
    {
        if(head==NULL) 
        {
            cout << "The DLL is empty" << endl;
            return;
        }
        else if(head->next==NULL)
        {
            head->prev=NULL;
            delete head;
            head=NULL;
            return;
        }
        Node* temp = head;
        head= head->next;
        temp->next = NULL;
        if(head!=NULL) head->prev = NULL;
        delete(temp);
    }

    void pop_back () 
    {
        if(head==NULL) 
        {
            cout << "The DLL is empty" << endl;
            return;
        }
        else if(head->next==NULL)
        {
            delete head;
            head=NULL;
            return;
        }
        Node*temp = tail;
        tail = tail->prev;
        if(tail!=NULL) tail->next = NULL;
        temp->prev = NULL;
        delete(temp);
    }

    // O(n)
    void display()
    {
        Node*temp = head;
        while(temp!=NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main () 
{
    DLL l;
    l.push_front(10);
    l.push_front(20);
    l.push_back(40);
    l.push_front(90);
    l.display();
    l.pop_front();
}
