#include<iostream>
using namespace std;
int main()
{
    int a[4]={1,2,3,4},size,i;
    size=sizeof(a)/sizeof(a[0]);
    cout<<"array elements are";
    for(i=0;i<size;i++)
    {
        cout<<"\n"<<"a["<<i<<"]="<<a[i];
    }
    
}