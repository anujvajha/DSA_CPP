#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// int subarraySum(vector<int>& nums, int k) 
// {
//     int n = nums.size();
//     int c=0;
//     for(int i=0; i<n; i++)
//     {
//         int sum=0;
//         for(int j=i; j<n; j++)
//         {
//             sum+=nums[j];
//             if(sum==k) c++;
//         }
//     }
//     return c;
// }


// Optimal solution
int subarraySum(vector<int>& nums, int k) 
{
    int n = nums.size();
    vector<int> ps(n, nums[0]);
    for(int i=1; i<n; i++) ps[i] = ps[i-1]+ nums[i];
    
    unordered_map<int, int> m;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int val = ps[i]-k;
        if(ps[i]==k) ans++;
        if(m.find(val)!=m.end()) ans+=m[val];
        
        m[ps[i]]++;
    }
    return ans;
}

// TC:- O(n)
// SC:- O(n)