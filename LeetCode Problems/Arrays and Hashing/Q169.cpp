#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


/* int majorityElement(vector<int>& nums) 
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int f = 1, ans = nums[0];
    if(n==1) return nums[0];
    for(int i=1; i<n; i++)
    {
        if(nums[i]==nums[i-1]) f++;
        else 
        {
            f=1;
            ans = nums[i];
        }
        if(f> n/2) return nums[i];
    }
    return -1;
}*/

// TC:- O(nlogn)
// SC:- O(1)

//optimal solution - moore's algorithm

