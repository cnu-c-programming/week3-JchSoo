#include <stdio.h>
#include <stdarg.h>

void my_sum(char arg1, ...) {
    va_list ap;
    va_start(ap, arg1);

    if (arg1 == 'S') {
        int cnt = va_arg(ap, int);

        for (int i = 0; i < cnt; i++) {
            printf("%s", va_arg(ap, char *));
            if (i != cnt-1 ) printf(" ");
        }
        printf("\n");

        va_end(ap);
    } else if (arg1 == 'C') {
        int cnt = va_arg(ap, int);

        for (int i = 0; i < cnt; i++) {
            printf("%c", va_arg(ap, int));
        }
        printf("\n");

        va_end(ap);
    } else if (arg1 == 'D') {
        int cnt = va_arg(ap, int);
        int result = 0;

        for (int i = 0; i < cnt; i++) {
            result += va_arg(ap, int);
        }
        printf("%d\n", result);
        va_end(ap);
    }
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}