#include<iostream>
#include<string>
using namespace std;

 string mergeAlternately(string word1, string word2) 
{
    int m = word1.length();
    int n = word2.length();
    int i=0, j=0;
    string s = "";

    while(i<m && j<n)
    {
        s.push_back(word1[i]);
        s.push_back(word2[j]);
        i++;
        j++;
    }
    while(i<m)
    {
        s.push_back(word1[i]);
        i++;
        
    }
    while(j<n)
    {
        s.push_back(word2[j]);
        j++;
    }
    return s;
}

// TC & SC :- O(m+n)