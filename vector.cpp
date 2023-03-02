
#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++){
        cout<<v[i];
    }

    return 0;
}
