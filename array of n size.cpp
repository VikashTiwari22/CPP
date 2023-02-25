#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array is ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array element ";
        cin>>a[i];
    }
    cout<<"array is [";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
}