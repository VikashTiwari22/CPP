#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"size of integer is"<<" "<<sizeof(int)<<endl;
    for(i=0;i<5;i++)
    cout << "Address a[" << i << "] is " << &a[i]<<"\n";
}