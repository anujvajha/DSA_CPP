#include<iostream>
using namespace std;

int main ()
{
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n-1; i++)
    {
       for(int j=0; j<n-1-i; j++)
       {
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
       }
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}


// comparision based algorithm
// largest element “bubbles up” to the correct position each pass
// average TC :- O(n^2)
// in place sorting - no extra memory is required
// early exit if no swaps in a pass -> best case TC :- O(n)