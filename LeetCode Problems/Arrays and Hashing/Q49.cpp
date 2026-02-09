#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    int n = strs.size();
    unordered_map<string, vector<string>> m;
    for(int i=0; i<n; i++)
    {
        string str = strs[i];
        string s = str;
        sort(s.begin(), s.end());
        m[s].push_back(str);
    }
    vector<vector<string>> ans;
    for(auto&x : m) ans.push_back(x.second);
    return ans;
}