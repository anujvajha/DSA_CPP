#include<iostream>
#include<algorithm>
#include<vector>

int removeElement(vector<int>& nums, int val) 
{
    int n = nums.size();
    int i=0, j=(n-1);
    while (i<=j)
    {
        if(nums[i] == val && nums[j]!=val)
        {
            swap(nums[i], nums[j]); // O(1)
            i++;
            j--;
        }
        else if(nums[i]==val && nums[j]==val) 
        {
            j--;
        }
        else i++;
    }
    nums.resize(j+1); //    O(1)
    return nums.size();
}

// TC :- O(n)
// SC:- O(1)