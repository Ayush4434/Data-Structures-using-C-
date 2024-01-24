#include <iostream>
using namespace std;
//Check if an array is sorted or not
bool  Checkarray(int arr[],int i,int n)
{
    if(i==n-1)
    {
        return true;
    }
    else if(arr[i]<arr[i+1])
    {
        return Checkarray(arr,i+1,n);
    }
    else{
       return false;
    }
}
int main()
{
    int arr[] = {25,2,3,4,5};
    if(Checkarray(arr,0,5))
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
}