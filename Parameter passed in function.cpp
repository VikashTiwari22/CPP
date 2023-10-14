#include<iostream>
using namespace std;

int compute(int a,int b)
{
    int result = a*a+b*b;
    return result;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<compute(a,b)<<endl;
    return 0;
}