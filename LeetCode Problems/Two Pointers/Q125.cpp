#include<iostream>
#include<string>
#include<vector>
using namespace std;


bool isPalindrome(string s) 
{
    int n = s.length();
    int i=0, j=(n-1);

    while(i<j)
    {
        if(!isalnum(s[i])) 
        {
            i++;
            continue;
        }
        if(!isalnum(s[j])) 
        {
            j--;
            continue;
        }
        if(tolower(s[i])!= tolower(s[j]))
        {
            return false;
        }
        else 
        {
            i++, j--;
        }
    }
    return true;
}

// TC:- O(n)
// SC:- O(1)