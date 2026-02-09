#include<iostream>
#include<vector>
using namespace std;

int main () 
{
    vector<int>nums = {3,-4,5,4,-1,7,-8};
    int cs=0, ms = INT_MIN;
    for(int i=0; i<nums.size(); i++)
    {
        cs+=nums[i];
        ms = max(cs, ms);
        if(cs<0) cs =0;
    }
    cout << ms << endl;

}