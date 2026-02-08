#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main ()
{
    map<int, int> m;
    map<int, int> :: iterator i;
    m.insert({2,1});
    m.insert({1,3});
    m[4] = 10; // TC:- O(logn) n = current size of the map
    m[4] = 11; // 10 will be overwritten because maps dont have duplicate keys

    
    //elements will be printed in an ascending value of key
    for(i=m.begin(); i!=m.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }

    // TC of accessing an element is O(logn)
    // Total TC of the loop is  O(nlogn) 
    for(auto& x: m) cout << x.first << endl;
    

    auto it = m.find(2); // O(logn) -> if not present then it will return m.end()
    m.erase(2); // Erases the value with key = 2
    m.erase(it); // it should be a valid pointer






    unordered_map<int, int> m;
    unordered_map<int, int> :: iterator i;

    m.insert({0,1}); // O(1)
    m.insert({1,2});
    m.insert({3,4});
    // elements will be printed in a random order of keys
    // for(i = m.begin(); i!=m.end(); i++) // O(1)
    // {
    //     cout << i->first << " " << i-> second << endl; // Total TC:- O(n)
    // }

    for(auto &x: m)
    {
        cout << x.first << endl;
    }

}


// for maps -> implemented internally using self balancing binary search tree ( red-black tree )
// for unordered maps -> implemented internally using hash tables

// only basic data types and strings can be used as keys in unordered maps
// all data types and containers can be used as keys in maps