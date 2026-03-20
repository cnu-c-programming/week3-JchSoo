#include <stdio.h>
#include <stdarg.h>

int avarge(int arg1, ...) {
    va_list ap;
    va_start(ap, arg1);
    int total = 0;
    int cnt = 0;

    for (int i = 0; i < arg1; i++) {
        total += va_arg(ap, int);
        cnt++;
    }
    va_end(ap);

    return  total / cnt;
}

int main() {
    printf("%d\n", avarge(3, 10, 20, 30));
    printf("%d\n", avarge(5, 10, 20, 30, 40, 50));

    return 0;
}