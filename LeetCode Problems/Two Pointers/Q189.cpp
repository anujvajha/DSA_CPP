#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) 
{
    int n = nums.size();
    vector<int> temp(n,0);

    for(int i=0; i<n; i++)
    {
        int idx = i+k;
        if(idx<n) temp[idx] = nums[i];
        else 
        {
            int newidx = idx % n;
            temp[newidx] = nums[i];
        }
    }
    for(int i=0; i<n; i++) nums[i] = temp[i];
}
// TC:- O(n)
// SC:- O(n)

// Optimal Solution
void rotate(vector<int>& nums, int k) 
{
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
// TC:- O(n)
// SC:- O(1)