#include<iostream>
#include<string>
using namespace std;
int main()
{
    string Mystring="hello";
    Mystring[0]='j';
    cout<<Mystring<<endl;
    cout<<Mystring[2]<<endl<<Mystring.size();
    //you can also use .length() for find the length or size of a string
    return 0;
}