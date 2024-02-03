#include <iostream>
using namespace std;
// Write a program to print all possible permutations of a string.
void permutation(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        permutation(ros,ans+ch);
    }
}
int main()
{
    permutation("ABC","");
}