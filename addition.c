#include <stdio.h>

int main() {
    int a, b, sum;

    // ��ʾ�û�������������
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // �����������ĺ�
    sum = a + b;

    // ������
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
