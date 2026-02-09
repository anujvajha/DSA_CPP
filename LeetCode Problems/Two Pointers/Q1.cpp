#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    int n = nums.size();
    int i=0, j=(n-1);
    vector<int> ans;
    while(i<j)
    {
        if(nums[i]+nums[j] > target) j--;
        else if(nums[i]+nums[j] < target) i++;
        else 
        {
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
        }
    }
    return ans;
    
}

// TC:- O(n)
// SC:- O(1)