#include <iostream>
using namespace std;
//Write a program to calculate n raised to power of p
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n * power(n,p-1);
}
int main()
{
    cout<<power(5,4);
    return 0;
}