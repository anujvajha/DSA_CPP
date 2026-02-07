 #include<iostream>
 #include<vector>
 #include<list>
 #include<stack>
 using namespace std;

class Stack 
{
    list<int> l;

    public:
    void push(int val) // O(1)
    {
        l.push_front(val);      
    }
    void pop () // O(1)
    {
        if(l.empty())
        {
            cout << "Stack underflow" << endl;
            return;
        }
        l.pop_front();
    }
    int top () // O(1)
    {
        if(l.empty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return l.front();
    }
    bool Empty () // O(1)
    {
        return l.size()==0;
    }

};


 int main ()
 {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() <<endl;
    s.pop();
    cout << s.top() <<endl;


    // implementation of stack using STL
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() <<endl;
    s.pop();
    cout << s.top() <<endl; 

 }