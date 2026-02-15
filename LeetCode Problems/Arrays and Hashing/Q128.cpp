#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) 
{
    int n = nums.size();
    if(n==0) return 0;

    unordered_set<int> s;
    int max_count = INT_MIN;

    for(int i: nums) s.insert(i);
    for(int i: s)
    {
        int count =0;
        if(s.find(i-1)==s.end())
        {
            int a = i;
            while(s.find(a)!=s.end())
            {
                count ++;
                a++;
            }
        }
        max_count = max(max_count, count);
    }
    return max_count;
}

// TC:- O(n)
// SC:- O(no. of unique elements in the vector)