#include<iostream>
using namespace std;

class circularQueue 
{
    int* arr;
    int currSize, cap;
    int f,r;

    public:
    circularQueue(int size)
    {
        cap = size;
        arr = new int[cap];
        currSize=0;
        f=0;
        r=-1;
    }

    // all operations - O(1)

    void push (int val)
    {
        if(currSize==cap)
        {
            cout << "Queue is full" << endl;
            return;
        }

        r = (r+1)%cap;
        arr[r] = val;
        currSize++;

    }

    void pop ()
    {
        if(currSize==0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        f = (f+1)%cap;
        currSize--;
    }

    int front ()
    {
        if(currSize==0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool empty ()
    {
        return currSize==0;
    }
};

int main () 
{
    circularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);

    while(!cq.empty())
    {
        cout << cq.front() << " ";
        cq.pop();
    }
    // cout << endl;
    // cout << cq.front() << endl;
    // cq.pop();
    // cout << cq.front() << endl;


}