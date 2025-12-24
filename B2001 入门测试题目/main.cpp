#include <iostream>
using namespace std;

int main(){
    // cout<<"请输入一个两位数";
    // 注释这行的原因是可能影响自动改卷机
    int a,b;
    cin>>a>>b;
    const int c = a+b;
    cout<<c;
    
    return 0; 
}