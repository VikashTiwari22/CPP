#include<iostream>
using namespace std;
int main()
{
    int arr[5]={45,46,88,25,95};
    int max=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
}