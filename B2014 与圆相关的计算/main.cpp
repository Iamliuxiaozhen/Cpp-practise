#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double r;
    cin >> r;
    const double PI = 3.14159;
    double diameter = 2.0 * r;
    double perimeter = 2.0 * PI * r;
    double area = PI * r * r;
    cout << fixed << setprecision(4) << diameter << " " << perimeter << " " << area << endl;
    
    return 0;
}

//单词：
//diameter-->直径
//perimeter-->周长
//area-->面积

//公式：
//周长：2πr
//面积：πr^2