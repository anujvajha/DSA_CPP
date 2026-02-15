#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) 
{
    int n = nums.size();
    vector<int> prev(n,1);
    vector<int> next(n,1);

    for(int i=1; i<n; i++) prev[i] = prev[i-1]*nums[i-1];
    for(int i=n-2; i>=0; i--) next[i] = next[i+1]*nums[i+1];
    for(int i=0; i<n; i++) nums[i] = prev[i]*next[i];

    return nums;
}

int main ()
{
    vector<int> nums = {1,2,4,6};
    vector<int> ans = productExceptSelf(nums);
    for(int i : ans) cout << i << " ";

}

// TC:- O(n)
// SC:- O(n)
