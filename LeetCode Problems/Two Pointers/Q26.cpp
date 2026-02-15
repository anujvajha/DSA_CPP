#include<iostream>
#include<vector>
using namespace std;


int removeDuplicates(vector<int>& nums) 
{
    int n = nums.size();
    int i=1, k=1;

    while(i<n)
    {
        if(nums[i]==nums[i-1])
        {
            i++;
            continue;
        }
        else 
        {
            nums[k++] = nums[i++];
        }
    }
    return k;
}

// TC:- O(n)
// SC:- O(1)