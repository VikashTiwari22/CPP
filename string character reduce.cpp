#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
     string temp ="";
     for(int j=0;j<n-i;j++)
     {
         temp=temp+s[j];
     } cout<<temp<<endl;
    }
   
}