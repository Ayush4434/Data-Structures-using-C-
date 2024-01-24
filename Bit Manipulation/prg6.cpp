#include <iostream>
using namespace std;
//Write a program to find two unique numbers.
int setBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
void unique(int arr[],int n)
{
    int xorsum = 0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int setbit = 0;
    int pos=0;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        setbit = 1<<pos;
    }
    int newxor = 0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos))
        {
           newxor = newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<< (newxor^xorsum);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,4,3,2,1};
    unique(arr,10);
}