#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int evalRPN(vector<string>& tokens) 
{
    int n = tokens.size();
    stack<int> s;
    for(int i=0; i<n; i++)
    {
        if(tokens[i]=="+")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a+b);
        }
        else if(tokens[i]=="-")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b-a);
        }
        else if(tokens[i]=="*")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a*b);
        }
        else if(tokens[i]=="/")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b/a);
        }
        else
        {
            s.push(stoi(tokens[i]));
        }
        
    }

    return s.top();
}

// TC:- O(n)
// SC:- O(n)