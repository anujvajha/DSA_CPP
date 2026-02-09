#include<iostream>
#include<vector>
using namespace std;

// void sortColors(vector<int>& nums) 
// {
//     int n = nums.size();
//     map<int, int> m;
//     for(int i: nums) m[i]++; // TC for inserting each element is O(logn) -> n = no. of unique elements in the vector
//     int s=0;
//     for(auto& x: m) // O(n) -> n = no. of elements in the vector
//     {
//         int k = x.second;
//         for(int j=0; j<k; j++)
//         {
//             nums[s++] = x.first;
//         }
//     }
// }


// DNF Algorithm - Optimal Solution
void sortColors(vector<int>& nums) 
{
    int n = nums.size();
    int l=0, m=0, h=(n-1);

    while (m<=h)
    {
        if(nums[m]==0)
        {
            swap(nums[m], nums[l]);
            l++;
            m++;
        }
        else if(nums[m]==1) m++;
        else 
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
}
// TC:- O(n)
// SC:- O(1)