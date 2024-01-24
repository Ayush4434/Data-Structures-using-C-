#include <iostream>
using namespace std;
//Write a program to check if a given number is power of 2
bool poweroftwo(int n)
{
   if(n & 1)
   {
    return false;
   }
   return true;
}
int main()
{
    int check = 5;
    if(poweroftwo(check))
    {
        cout<<"Yes";
    }
    else cout<<"No";
}