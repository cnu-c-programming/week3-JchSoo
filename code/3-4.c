#include <stdio.h>
#include <stdarg.h>

int max_of(int arg1, ...) {
    int result = arg1;
    int this;

    va_list ap;
    va_start(ap, arg1);

    for (int i = 0; i < arg1; i++) {
        this = va_arg(ap, int);
        if (result < this) result = this;
    }
    va_end(ap);

    return  result;
}

int main() {
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));

    return 0;
}