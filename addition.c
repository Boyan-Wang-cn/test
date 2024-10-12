#include <stdio.h>

int main() {
    int a, b, sum;

    // 提示用户输入两个整数
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // 计算两个数的和
    sum = a + b;

    // 输出结果
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
