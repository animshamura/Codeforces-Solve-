#include <iostream>

using namespace std;

int main()
{
    long long t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<max(a,b)<<endl;
    }

    return 0;
}
