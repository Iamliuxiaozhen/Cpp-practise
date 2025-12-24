#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    const int a1 = a+b;
    const int a2 = a1/c;
    cout<<a2;

    return 0;
}

//可参考我B2008的代码，将第8行中的*改为/即可。