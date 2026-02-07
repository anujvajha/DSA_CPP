#include<iostream>
#include<vector>
using namespace std;

int main () 
{
    // continous memory
    // elements of single data type

    vector<int> v;   // at compile time the size of the vector is 0 
    vector<int> vec = {1,2,3};
    vector<int> p(3,0);  

    for(int i : vec) // for each loop - O(n)
    {
        cout << i << " ";
    }

    cout << vec.size() << endl;

    vec.push_back(4);  
    vec.pop_back();

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(0) << endl;  

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    cout << v.size() << endl;      // 3
    cout << v.capacity() << endl;  // 4


}