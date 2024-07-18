#include<iostream>
using namespace std;
int main()
{
    int arr[100]={45,26,78,36};
    int element =88;// this is the element which we have to insert in array at index 3
    int index=3; // this is the index where we store the element
    for(int i=99;i>=index;i--)
    {
        arr[i+1]=arr[i]; // 
        
    }
    arr[3]=88;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}