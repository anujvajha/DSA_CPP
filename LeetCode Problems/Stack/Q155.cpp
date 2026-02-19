#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack<pair<int,int>> s;
void push(int val) 
{
    if(s.empty()) s.push({val, val});
    else s.push({val, min(val, s.top().second)});
}

void pop() 
{
    s.pop();
}

int top() 
{
    return s.top().first;
}

int getMin() 
{
    return s.top().second;
}