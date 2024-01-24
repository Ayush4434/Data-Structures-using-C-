#include <iostream>
using namespace std;
//Print numbers till n
//1.Decreasing order
//2.Increasing order
void Decreasing(int n)
{
    if(n==0)
    {
        cout<<0;
        return;
    }
    cout<<n<<" ";
    return Decreasing(n-1);
}
void Increasing(int n)
{
     if(n==0)
    {
        cout<<0<<" ";
        return;
    }
    Increasing(n-1);
    cout<<n<<" ";
}
int main()
{
    int n = 100;
    cout<<"Decreasing: ";
    Decreasing(n);
    cout<<endl;
    cout<<"Increasing: ";
    Increasing(n);
    cout<<endl;
}
