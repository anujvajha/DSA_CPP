#include<iostream>
#include<vector>
using namespace std;

// TC :- 0(n+m)
void countSort (int arr[], int n)
{
    // to find the max element in the input array 
    int m = arr[0];
    for(int i=0; i<n; i++) 
    {
        m = max(m, arr[i]);
    }

    // to create a count array of m elements ( m = maximum no. in the input array )
    vector<int> count(m,0);

    // store frequency of each element of the input array in the count array
    for(int i=0; i<n; i++) count[arr[i]]++;

    // store cumulative frequency of each element
    for(int i=1; i<=m; i++) count[i]+= count[i-1];

    // main logic
    int output[n];
    for(int i=n-1; i>=0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++)
    {
        arr[i] = output[i];
    }
}


int main ()
{
    int arr[] = {1,3,2,3,4,1,6,4,3};
    countSort(arr, 9);

    for(int i=0; i<9; i++) cout << arr[i] << " ";
}

// counting sort is a non-comparison-based, integer sorting algorithm




