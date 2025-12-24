#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    const int a1 = a/b;
    const int a2 = a%b;
    cout<<a1<< " "<<a2;

    return 0;
}