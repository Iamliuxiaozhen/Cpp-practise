#include <iostream>
using namespace std;

int main() {
    int a[6];
    for (int i = 1; i <= 5; i++) cin >> a[i];

    int eat = 0;

    for (int i = 1; i <= 5; i++) {
        int cur = a[i];
        int t = cur / 3;
        eat += cur - 3 * t;

        // 自己留下 t
        a[i] = t;

        // 左右邻居
        int left = (i == 1 ? 5 : i - 1);
        int right = (i == 5 ? 1 : i + 1);

        a[left] += t;
        a[right] += t;
    }

    // 输出最终糖果
    for (int i = 1; i <= 5; i++) {
        cout << a[i] << (i == 5 ? '\n' : ' ');
    }

    cout << eat << endl;
    return 0;
}