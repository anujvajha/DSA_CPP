#include<iostream>
using namespace std;

void change (int brr[], int n) // arrays always follow pass by reference
{
    for(int i=0; i<n; i++)
    {
        brr[i] = 2*brr[i];
    }
}

int main () 
{
    int arr[4];
    int brr[] = {1,2,3};
    int n = sizeof(arr);    // size = 16 bytes ( 4 bytes x 4 )

    for(int i=0; i<4; i++) 
    {
        cin >> arr[i];
    }

    for(int i=0; i<4; i++) // 0(n)
    {
        cout << arr[i] << endl;
    }

    
    for(int i=0; i<3; i++)
    {
        cout << brr[i] << endl;
    }

    change(brr, 3); // when arrays are passed as arguments into functions then the address of the first element of the array is passed

    // after passing into the function
    for(int i=0; i<3; i++)
    {
        cout << brr[i] << " ";
    }

}