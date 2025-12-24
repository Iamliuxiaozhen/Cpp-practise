#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    float c = (float)b/a * 100;
    cout<<fixed<<setprecision(3)<<c<<"%";

    return 0;
}