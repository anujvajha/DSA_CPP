#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class CLL
{
    Node* head;
    Node* tail;

    public:
    CLL() 
    {
        head = tail = NULL;
    }

    void push_front (int val)
    {
        Node* newnode = new Node(val); 
        if(head==NULL) 
        {
            head=tail=newnode;
            tail->next=head;
            return;
        }
        else 
        {
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }
    void push_back (int val)
    {
        Node* newnode = new Node(val); 
        if(head==NULL) 
        {
            head=tail=newnode;
            tail->next = head;
            return;
        }
        else 
        {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }

    void pop_front () 
    {
        if(head==NULL) 
        {
            cout << "The CLL is empty" << endl;
            return;
        }
        else if(head==tail)
        {
            delete head;
            head=tail=NULL;
            return;
        }
        else if 
        {
            Node* temp=head;
            head= head->next;
            tail->next = head;
            temp->next = NUL;
            delete temp;
        }
        
    }

    void pop_back () 
    {
        if(head==NULL) 
        {
            cout << "The CLL is empty" << endl;
            return;
        }
        else if(head==tail)
        {
            delete head;
            head=tail=NULL;
            return;
        }
        
        else if 
        {
            Node* temp = head;
            while(temp->next!=tail) temp = temp->next;
            temp->next = head;
            delete tail;
            tail = temp;
        }
    }

    void display()
    {
        Node*temp = head;
        do 
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while(temp!=head)
        cout << endl;
    }

};

int main () 
{
    CLL l;
    l.push_front(10);
    l.push_front(20);
    l.push_back(40);
    l.push_front(90);
    l.display();
    l.popback();
    l.pop_front();
}
