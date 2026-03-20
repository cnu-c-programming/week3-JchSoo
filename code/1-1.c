#include <stdio.h>

int add(int arg1, int arg2) {
    return arg1 + arg2;
}

int sub(int arg1, int arg2) {
    return arg1 - arg2;
}

int mul(int arg1, int arg2) {
    return arg1 * arg2;
}

int div(int arg1, int arg2) {
    return arg1 / arg2;
}

int main(void) {
    int a = 10, b = 5;

    int add_result = add(a, b);
    int sub_result = sub(a, b);
    int mul_result = mul(a, b);
    int div_result = div(a, b);
    
    printf("%d + %d = %d\n", a, b, add_result);
    printf("%d + %d = %d\n", a, b, sub_result);
    printf("%d + %d = %d\n", a, b, mul_result);
    printf("%d + %d = %d\n", a, b, div_result);

    return 0;
}