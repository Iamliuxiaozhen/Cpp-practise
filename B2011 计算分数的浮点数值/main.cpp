#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;
    double c = a/b;
    cout << fixed << setprecision(9) << c;
    return 0;
}

//题目要求双精度浮点值，要使用double，而非float（单精度浮点）