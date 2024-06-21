#include<iostream>
using namespace std;
int main()
{
    
    int arr[5]={10,15,3,2,6};
    for(int i=1;i<4;i++)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
             cout<<arr[i]<<" ";
            
        }
       
    }
    
    
}