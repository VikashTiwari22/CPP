#include<iostream>
using namespace std;
int main()
{
    int arr[5]={45,46,88,25,95};
    int lowest=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<lowest)
        {
            lowest=arr[i];
        }
    }
    cout<<lowest;
}