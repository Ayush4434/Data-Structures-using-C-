#include <iostream>
using namespace std;
// Write a program to find the factorial of a number
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return (n* fact(n-1));
}
int main()
{
    cout<< fact(5);
    return 0;
}