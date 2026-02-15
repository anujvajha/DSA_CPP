#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) 
{
    int n = height.size();
    int i=0, j=(n-1);
    int maxvol = 0;
    while(i<j)
    {
        int l = min(height[i], height[j]);
        int b = j-i;
        int vol = l*b;
        maxvol = max(maxvol, vol);
        if(height[i]<=height[j]) i++;
        else j--;
    }
    return maxvol;
    
}
// TC:- O(n)
// SC:- O(1)