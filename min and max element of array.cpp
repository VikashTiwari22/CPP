#include<iostream>
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
    int minimum_element=arr[0];
    for(int i=0;i<n;i++)
    {
        minimum_element=min(minimum_element, arr[i]);
    }
    cout<<"minimum element of array is " <<minimum_element<<endl;
    
    
    int maximum_element=arr[0];
    for(int i=0;i<n;i++)
    {
        maximum_element=max(maximum_element, arr[i]);
    }
    cout<<"maximum element of array is "<<maximum_element;
}