#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string reverse ;
    for(int i=s.length();i>=0;i--)
    {
        reverse=reverse+s[i];
    }
    cout<<reverse;
} 