#include<iostream>
using namespace std;
void myFunction(string car="BMW X5")
{
    cout<<car<<endl;
}
int main()
{
    myFunction("mercedes");
    myFunction("porche");
    myFunction();
}