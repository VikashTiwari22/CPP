#include<iostream>
using namespace std;
int main()
{
   int arr[6]={1,2,3,4,5};
   int size=6;
   int element=88;
   arr[size-1]=element;
   for(int i=0;i<6;i++)
   {
       cout<<arr[i];
   }
}