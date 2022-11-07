#include<iostream>
using namespace std;
int main()
{
    int i;
     int ar[5]={1,2,3,4,5};
     {
       ar[4]=55;
       {
       for(i=0;i<5;i++)
       {
           cout<<ar[i]<<endl;
       }
       }
     }
    
}