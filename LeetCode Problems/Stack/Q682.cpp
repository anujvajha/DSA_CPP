#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int calPoints(vector<string>& ops) 
{
    int sum =0;
    int n = ops.size();
    stack<int> s;
    for(int i=0; i<n; i++)
    {
        if(ops[i]=="D")
        {
            int x = s.top();
            s.push(x*2);
        }
        else if(ops[i]=="C") s.pop();
        else if(ops[i]=="+")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.push(a);
            s.push(a+b);
        }
        else s.push(stoi(ops[i]));

    }

    while(!s.empty())
    {
        sum+= int(s.top());
        s.pop();
    }
    return sum;
    
}