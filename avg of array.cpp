#include<iostream>
using namespace std;
int main()
{
    int arr[5]={55,65,23,66,25};
    int sum=0;
    int avg;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        avg=sum/5;
    }
    
    cout<<avg;
    
}