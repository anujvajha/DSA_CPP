#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) 
{
    int n = nums.size();
    unordered_map<int,int> mp;
    for(int num : nums)
    {
        mp[num]++;

        if(mp.size() > 2)
        {
            for(auto it = mp.begin(); it != mp.end();)
            {
                it->second--;
                if(it->second == 0) it = mp.erase(it);
                else it++;   
            }
        }
    }
    unordered_map<int,int> check;
    for(int num : nums)
    {
        if(mp.count(num)) check[num]++;     
    }
    vector<int> result;
    for(auto it : check)
    {
        if(it.second > n/3) result.push_back(it.first);
    }

    return result;
}