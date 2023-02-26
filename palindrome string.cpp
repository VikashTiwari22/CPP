#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int start=0;
    int end=s.length()-1;
    while(start <=end)
    {
        if(s[start++]!=s[end--])
        cout<<"string is not palindrome";
        return 0;
    }
    cout<<"string is palindrome";
}