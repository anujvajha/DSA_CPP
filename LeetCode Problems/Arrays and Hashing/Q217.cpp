#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) 
{
    unordered_map<int, int> m;
    for(int i: nums)
    {
        if(m.find(i)!=m.end()) return true;
        else m[i]=1;
    }
    return false;
    
}

// TC: O(n) -> worst case - O(n^2) due to collisions
// SC: O(n)