#include <stdio.h>

int main() {
    int a, b;
    float res;
    char c;
    do {
        scanf("%i %c %i", &a, &c, &b);
    } while (c == '/' && b == 0);

    switch (c) {
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / (float) b;
            break;
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
    }
    printf("Wynik %i %c %i to %0.1f", a, c, b, res);
}
