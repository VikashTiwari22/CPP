#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no"<<" ";
    cin>>n;
    int sum = 0;
    for(int i=0;i<=n;i++)
    sum=sum+i;
    cout<<"the Sum is"<<" ";
    cout<<sum;
}