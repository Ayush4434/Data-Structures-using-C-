#include <iostream> 
//Write a program to find one unique element present in the array.
using namespace std;
int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[11] = {1,2,3,4,5,6,5,4,3,2,1};
    cout<<unique(arr,11);
}