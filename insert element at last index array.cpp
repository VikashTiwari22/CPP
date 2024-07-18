#include<iostream>
using namespace std;
int main()
{
    int arr[]={44,15,26,48};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int element=88;
    
    arr[size]=88;
    
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i];
    }
}