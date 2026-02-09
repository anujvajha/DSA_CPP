#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) 
{
    unordered_map<int, int> m;
    for(int i: nums) m[i]++;
    vector<int> ans;
    while(k>0)
    {
        int maxfreq = 0;
        int maxkey =0;
        for(auto&x : m)
        {
            if(x.second>maxfreq) 
            {
                maxfreq=x.second;
                maxkey = x.first;
            }
        }
        ans.push_back(maxkey);
        m.erase(maxkey);
        k--;
    }
    return ans;
}
// TC:- O(n*k) -> n = no. of unique elements in the map
// SC:- O(unique elements) -> worst case = O(n)
