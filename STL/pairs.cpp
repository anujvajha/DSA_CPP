#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    // pair <int, int> p = {1,2};
    // cout << p.first << " " << p.second << endl;
    // pair <int, int> p1 = p;
    // p1.first = 5;
    // cout << p1.first << endl;
    // cout << p.first << endl;


    // vector <int> v = {1,2,3};
    // vector <int> v2 = v;  // O(n)



    // int arr[] = {1,2,3};
    // int* brr = arr;
    // brr[0] = 10;
    // cout << arr[0] << endl;


}
// always pass vectors as reference because creating a copy of a vector is expensive
// arr = &arr[0]
// therefore int* brr = &arr[0]
// brr[0] = *(brr+0) -> value at the first index