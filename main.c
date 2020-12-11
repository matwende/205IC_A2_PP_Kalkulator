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
    printf("Wynik %f %c %f to %f", a, c, b, res);
}
