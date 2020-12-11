#include <stdio.h>

int main() {
    float a, b, res;
    char c;
    scanf("%f %c %f", &a, &c, &b);

    switch (c) {
        case '*':
            res = a*b;
            break;
        case '/':
            res = a/b;
            break;
        case '+':
            res = a+b;
            break;
        case '-':
            res = a-b;
            break;
    }
    printf("Wynik %0.1f %c %0.1f to %0.1f", a, c, b, res);
}
