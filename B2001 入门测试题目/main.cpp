#include <iostream>
using namespace std;

int main(){
    // cout<<"请输入一个两位数";
    // 注释这行的原因是可能影响自动改卷机
    long a,b;
    cin>>a>>b;
    const long c = a+b;
    cout<<c;
    
    return 0; 
}

//Q:为什么用long不用int ?
//A:因为测试点包含int溢出的数（int32）