#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector<char>& s) 
{
    int n = s.size();
    int i=0, j=(n-1);

    while(i<j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }  
}

// TC:- O(n)
// SC:- O(1)