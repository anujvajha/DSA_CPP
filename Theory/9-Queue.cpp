#include<iostream>
#include<queue>
#include<deque>
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

class Queue 
{
    Node* head;
    Node* tail;

    public:
    Queue () 
    {
        head = tail = NULL;
    }

    // all operations - O(1)
    void push(int val)
    {
        Node* newnode = new Node(val); 
        if(empty()) 
        {
            head=tail=newnode;
        }
        else 
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop ()
    {
        if(empty()) 
        {
            cout << "The queue is empty" << endl;
            return;
        }
        Node*temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }

    int front ()
    {
        if(empty())
        {
            cout << "The queue is empty" << endl;
            return -1;
        }
        return head->data;
    }

    int rear ()
    {
        if(empty())
        {
            cout << "The queue is empty" << endl;
            return -1;
        }
        return tail->data;
    }

    bool empty()
    {
        return head==NULL;
    }

};

int main () 
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(90);
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    // queue implementation using STL 
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(90);
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    // deque implementation using STL 
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_front(5);
    dq.push_back(6);
    cout << dq.size() << endl;

    cout << dq.front() << endl;
    dq.pop_back();
    cout << dq.back() << endl;


}
