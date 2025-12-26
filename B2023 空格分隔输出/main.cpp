#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char input1;
    int input2;
    float input3;
    double input4;

    cin >> input1;
    cin >> input2;
    cin >> input3;
    cin >> input4;

    cout << input1 << " "
         << input2 << " "
         << fixed << setprecision(6) << input3 << " "
         << fixed << setprecision(6) << input4;

    return 0;
}