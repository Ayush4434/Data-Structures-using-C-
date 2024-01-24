#include <iostream>
using namespace std;
//Write a program to count unoque element in a triplet
int getBit(int n,int pos)
{
    return ((n & (1<<pos)));
}
int setBit(int n, int pos)
{
    return (n | (1<<pos));
}
int counttriplet(int arr[],int n)
{
    int result = 0;
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result = setBit(result,i);
        }
    }
    return result;
}
int main()
{
    int arr[] = {1,1,1,2,2,2,85,4,4,4,5,5,5};
    cout<<counttriplet(arr,7);
}