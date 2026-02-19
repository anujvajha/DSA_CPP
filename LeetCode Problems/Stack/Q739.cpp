#include<iostream>
#include<stack>
#include<vector>
using namespace std;


vector<int> dailyTemperatures(vector<int>& temp) 
{
    int n = temp.size();
    stack<int> s;
    s.push(0);
    vector<int> ans(n,0);
    for(int i=1; i<n; i++)
    {
        while(!s.empty() && temp[i]>temp[s.top()])
        {
            ans[s.top()] = i-s.top();
            s.pop();
        }
        s.push(i); 
    }
    return ans;
    
}

// TC:- O(n)
// SC:- O(n)