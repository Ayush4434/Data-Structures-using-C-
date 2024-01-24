#include <iostream>
using namespace std;
int countones(int n)
{
    int i = 0;
    int count = 0;
    int temp = 0;
    while(temp<=n)
    {
        if((n & (1<<i)))
        {
            count++;
        }
        i++;
        temp = 1<<i;
    }
    return count;
}
//alternate method
/*
int numberofones(int n)
{
    int count = 0;
    while(n)
    {
        n = n & n-1;
        count++;
    }
    return count;
}*/
int main()
{
    cout<<countones(15);
}