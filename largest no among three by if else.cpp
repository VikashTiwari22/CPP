#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"Largest no is "<<a;
    }
    else if(b>a&&b>c)
    {
        cout<<"Largest no is "<<b;
    }
    else
    cout<<"Largest no is "<<c;
}