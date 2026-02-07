#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) 
{
    int n = strs.size();
    if(n==0) return "";
    string prefix = strs[0];
    for(int i=1; i<n; i++)
    {
        int a=0, b=0;
        while(a<prefix.length() && b<strs[i].length())
        {
            if(prefix[a]!=strs[i][b])
            {
                break;
            }
            a++;
            b++;
        }
        prefix = prefix.substr(0, a);
    }
    if(prefix.length()==0) return "";
    return prefix;
}
// TC:- O(n*m) 
// n = total number of strings 
// m = length of the shortest string

// SC:- O(1)