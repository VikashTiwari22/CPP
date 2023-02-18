#include<iostream>
using namespace std;
int main()
{
    string s;
    string slice;
    cin>>s;
    for(int i=1;i<s.length()-1;i++)
    {
        slice=slice+s[i];
    }
    cout<<slice;
}