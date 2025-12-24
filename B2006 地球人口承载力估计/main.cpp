#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, a, y, b;
    cin >> x >> a >> y >> b;

    // 根据推导出的公式：z = (b*y - a*x) / (b - a)
    double z = (b * y - a * x) / (b - a);

    cout << fixed << setprecision(2) << z << endl;
    return 0;
}

//This problem was solved using Copliot; the AI-assisted text is in the ai-Analysis.md file.