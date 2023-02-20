#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        a[i]=a[i]-1;
        cout<<a[i]<<" ";
    }
}