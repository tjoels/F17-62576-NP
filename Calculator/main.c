#include <stdio.h>
#include <math.h>

int main() {
    double d1, d2;
    char operator;
    double result;

    printf("Lommeregner initialiseres. Indtast udregning.\n");

    while (1) {
        scanf("%lf%c%lf", &d1, &operator, &d2);

        switch (operator) {
            case '+':
                result = d1 + d2;
                break;
            case '-':
                result = d1 - d2;
                break;
            case '*':
                result = d1 * d2;
                break;
            case '/':
                result = d1 / d2;   //TODO: make this work. 10/2 = 100
            case '^':
                result = pow(d1, d2);
        }

        printf("%lf %c %lf", d1, operator, d2);
        printf(" = %lf\n", result);
    }
    return 0;
}