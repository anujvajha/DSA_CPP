#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

bool isAnagram(string s, string t) 
{
    int a = s.length();
    int b = t.length();

    unordered_map<char,int> m;
    unordered_map<char,int> n;

    for(char c : s) m[c]++;
    for(char c : t) n[c]++;

    if(a==b) return m==n;
    else return false;
    
}

// TC:- O(n)
// SC:- O(n)