#include<iostream>
#include<vector>
using namespace std;

void merge (vector<int>&nums, int s, int e) 
{
    int n = (e-s)+1;
    vector<int> temp(n);
    int k=0;
    int m = s + (e-s)/2;
    int i=s, j=m+1;

    while(i<=m && j<=e)
    {
        if(nums[i]<=nums[j]) 
        {
            temp[k] = nums[i];
            k++; 
            i++;
        }
        else 
        {
            temp[k] = nums[j];
            k++; 
            j++;
        }
    }
    while(i<=m)
    {
        temp[k] = nums[i];
        k++; 
        i++;
    }
    while(j<=e)
    {
        temp[k] = nums[j];
        k++; 
        j++;
    }
    for(int i=0; i<n; i++)
    {
        nums[i+s] = temp[i];
    }


}
void mergeSort (vector<int>&nums, int s, int e)
{
    if(s==e) return;
    int m = s+(e-s)/2;
    mergeSort(nums, s, m);
    mergeSort(nums, m+1, e);
    merge(nums, s,e);
}
vector<int> sortArray(vector<int>& nums) 
{
    int n = nums.size();
    mergeSort(nums, 0, n-1);
    return nums;
}

// TC:- O(nlogn)
// SC:- O(n) + O(logn) (recursion stack) -> O(n)
