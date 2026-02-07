#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    vector<int> v = {1,2,3,4,5};
    
    // you can avoid declaring the iterator by changing the data type of the iterator to auto
    vector<int> :: iterator i = v.begin();
    for(i = v.begin(); i!=v.end(); i++)
    {
        cout << *i << " ";
    }
    // for(auto &x : v) x++;
    // print elements of v

    vector<pair<int,int>> vec = {{1,2}, {3,4}, {5,6}};
    vector<pair<int,int>> :: iterator it = vec.begin();
    for(it = vec.begin(); it!=vec.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    // range based loops 
    for(int x : v) cout << x << " ";

    // copy of the elements is printed, not the original elements
    for(int x : v) x++;
    for(int x : v) cout << x << " ";
    // actual elements are modified and printed
    for(int& x : v) x++;
    for(int x : v) cout << x << " ";

}



// v.begin() -> points to the address of the first element
// v.end() -> points to the address of a location next to the last element
// i++ -> moves to the next iterator
// i+1 -> moves to the next location
// (*it).first == it->first