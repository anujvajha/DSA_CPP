#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next; // pointer

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List 
{
    Node* head;
    Node* tail;

    public:
    List () 
    {
        head = tail = NULL;
    }

    void push_front (int val) // O(1)
    {
        Node* newnode = new Node(val); // newnode is a pointer pointing to a node object created in the heap
        if(head==NULL) 
        {
            head=tail=newnode;
            return;
        }
        else 
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back (int val) // O(n) without tail
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
            tail = newnode;
        }
    }

    void pop_front () 
    {
        if(head==NULL) 
        {
            cout << "The list is empty" << endl;
            return;
        }
        else if (head->next==NULL)
        {
            delete head;
            head=NULL;
            return;
        }
        Node* temp = head;
        head= head->next;
        temp->next = NULL;
        delete(temp);
    }

    void pop_back () // O(n)
    {
        if(head==NULL) 
        {
            cout << "The list is empty" << endl;
            return;
        }
        else if (head->next==NULL)
        {
            delete head;
            head=NULL;
            return;
        }
        Node*temp = head;
        while(temp->next!=tail) temp = temp->next;
        temp->next = NULL;
        delete(tail);           // data in the heap of tail will be deleted 
        tail = temp;

    }

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

    void insert_mid(int val, int pos) // average - O(n)
    {
        if(pos<0)
        {
            cout << "Invalid Position" << endl;
            return;
        }
        else if(pos==0)
        {
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1; i++) temp = temp->next;

        Node* newnode = new Node(val);
        newnode->next = temp->next;
        temp->next = newnode;

    }
};

int main () 
{
    List l;
    l.push_front(10);
    l.push_front(20);
    l.push_back(40);
    l.push_front(90);
    l.display();
    l.pop_front();
}
