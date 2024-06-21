#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minimum=arr[0];
    for(int i=1;i<n;i++)
    {
        int minimum=min(minimum,arr[i]);
    }
    cout<<minimum;
    
}