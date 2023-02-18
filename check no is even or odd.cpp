#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        cout<<"positive:";
        if(n%2==0)
        {
            cout<<"even";
        }
        else
        {
            cout<<"odd";
        }
    }
    else if(n<0)
    {
        cout<<"negative:";
        {
            if(n%2==0)
            {
                cout<<"even";
            }
            else
            {
                cout<<"negative";
            }
        }
    }
    else
    {
        cout<<"zero";
    }
}