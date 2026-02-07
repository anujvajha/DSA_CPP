#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int majorityElement(vector<int>& nums) 
{
    int n = nums.size();
    unordered_map<int, int> m;
    for(int i: nums) m[i]++;

    for(auto&x : m)
    {
        if(x.second> n/2) return x.first;
    }
    return -1;
}

// TC:- O(n)
// SC:- O(unique values) -> in the worst case all values can be unique -> O(n)