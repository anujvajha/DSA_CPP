#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
    int n = nums.size();
    unordered_set<int> s;
    if(k==0) return false;

    for(int i=0; i<n; i++)
    {
        if(s.find(nums[i])!=s.end()) return true;
        if(s.size()>=k) s.erase(nums[i-k]);
        s.insert(nums[i]);
    }
    return false;
}
// TC:- O(n)
// SC:- O(k)