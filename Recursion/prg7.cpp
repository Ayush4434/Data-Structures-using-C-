#include <iostream>
using namespace std;
// Write a program to find the first and last occurence of a number in an array
int firstocc(int arr[],int i,int n,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,i+1,n,key);
}
int lasocc(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[n]==key)
    {
        return n;
    }
    return lasocc(arr,n-1,key);
}
int main()
{
    int arr[] = {4,2,1,2,5,2,7};
    cout<<firstocc(arr,0,6,2);
    cout<<lasocc(arr,6,2);
}