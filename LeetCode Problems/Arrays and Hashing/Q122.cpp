#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) 
{
    int n = prices.size();
    int sum = 0;
    for(int i=1; i<n; i++)
    {
        if(prices[i]>prices[i-1])
        {
            sum+=(prices[i]-prices[i-1]);
        }
    }
    return sum;
}
// TC:- O(n)
// SC:- O(1)


int maxProfit(vector<int>& prices) 
{
    int n = prices.size();
    int b=0, s=1;
    int maxprofit = 0;
    int profit=0;

    while(s<n)
    {
        if(prices[s]>prices[b])
        {
            maxprofit = max(maxprofit, (prices[s]-prices[b]));
        }
        else b=s;

        s++;
    }
    return maxprofit;
}
// TC:- O(n)
// SC:- O(1)