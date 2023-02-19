#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int n=min(x,y);
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0&&y%i==0)
        ans=i;
    }
    cout<<ans;
}