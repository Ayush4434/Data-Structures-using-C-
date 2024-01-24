#include <iostream>
using namespace std;
// Write a program to calculate sum of n numbers using recursion.
int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n + Sum(n-1));
}
int main()
{
   int n = 4;
   cout<<Sum(n);
}