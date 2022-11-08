#include<iostream>
using namespace std;
void myFunction(string car,int price)
{
    cout<<car<<price<<endl;
}
int main()
{
    myFunction("bmw",1000000);
    myFunction("mercedes",2000000);
}