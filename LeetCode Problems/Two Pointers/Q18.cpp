#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) 
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1; j<n; j++)
        {
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int a = j+1;
            int b = (n-1);
            while(a<b)
            {
                long long sum = (long long)nums[i]+nums[j]+nums[a]+nums[b];
                if(sum<target) a++;
                else if(sum>target) b--;
                else 
                {
                    vector<int> quad = {nums[i], nums[j], nums[a], nums[b]};
                    ans.push_back(quad);
                    a++, b--;

                    while(a<b && nums[a]==nums[a-1]) a++;
                }
            }
        }
    }
    return ans;
}

// TC:- O(nlogn + n^3)
// SC:- O(no. of unique groups)