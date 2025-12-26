#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);

    printf("%f\n", x);      // 默认6位小数
    printf("%.5f\n", x);    // 保留5位小数
    printf("%e\n", x);      // 科学计数法
    printf("%g\n", x);      // 自动选择格式

    return 0;
}

//C语言语法，而非C++