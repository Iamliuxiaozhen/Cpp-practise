#include <iostream>
#include <cmath>
using namespace std;

int main(){

    // 定变量
    double a,b;
    cin>>a>>b;
    
    // 计算
    double c = std::fmod(a, b);

    // 输出
    cout<<c;

    return 0;
}