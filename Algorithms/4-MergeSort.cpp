#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums, int s, int mid, int e)
{
    int i=s, j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=e)
    {
        if(nums[i]<=nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else 
        {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while(i<=mid) 
    {
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=e)
    {
        temp.push_back(nums[j]);
        j++;
    }

    for(int i=0; i<temp.size(); i++) nums[i+s] = temp[i]; 

}



void mergeSort(vector<int>& nums, int s, int e)
{
    if(s>=e) return;
    int mid = s + (e-s)/2 ; 

    mergeSort(nums, s, mid);
    mergeSort(nums, mid+1, e);

    merge(nums, s, mid, e);
}

int main ()
{
    vector<int> nums = {8,1,4,6,2,3,5,9};
    mergeSort(nums, 0, nums.size()-1);
    for(int i: nums) cout << i << " ";
}

// merge sort is a divide-and-conquer, comparison-based sorting algorithm
// stable sorting algorithm
// requires extra space - not an in place sorting algorithm
// best/avg/worst TC :- O(nlogn)
