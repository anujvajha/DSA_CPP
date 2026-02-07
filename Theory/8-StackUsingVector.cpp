 #include<iostream>
 #include<vector>
 using namespace std;

class stack 
{
    vector<int> v;

    public:
    void push(int val)
    {
        v.push_back(val);      
    }
    void pop ()
    {
        if(v.size()==0)
        {
            cout << "Stack Underflow!" << endl;
        }
        else v.pop_back();
    }
    int top ()
    {
        if(v.size()==0)
        {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        else return v[v.size()-1];
    }
    bool Empty ()
    {
        return v.size()==0;
    }

};


 int main ()
 {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() <<endl;

    while(!s.Empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

 }