#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r;
    int temp;
    temp=n;
    int sum = 0;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<"No is palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
    return 0;
}