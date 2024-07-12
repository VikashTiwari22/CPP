#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    int sum=a+b;
    a=sum-a;
    b=sum-b;
    cout<<a<<endl<<b;
}