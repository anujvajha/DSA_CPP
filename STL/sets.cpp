#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main () 
{
    // set<int> s;
    // s.insert(1); // O(logn) -> n = no. of unique elements
    // s.insert(2);

    // auto it = s.find(1); // if doesnt exist then s.end() will be returned
    // for(int x: s) cout << x << endl;
    // for(auto it= s.begin(); it!=s.end(); it++) cout << *it << endl;
    // s.erase(2);





    unordered_set<int> s;
    s.insert(1); // O(1) 
    s.insert(2);

    auto it = s.find(1); 
    for(int x: s) cout << x << endl;
    for(auto it= s.begin(); it!=s.end(); it++) cout << *it << endl;
    s.erase(2);

}

// we cant insert pairs or sets or any other complex data structures in sets