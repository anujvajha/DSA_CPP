#include<iostream>
using namespace std;

int main ()
{
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=1; i<n; i++)
    {
        int curr = arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

// insertion Sort is a comparison-based, stable sorting algorithm
// each new element is inserted into its correct position in the sorted part
// average TC :- O(n^2)
// best case TC :- O(n) when the array is already sorted
