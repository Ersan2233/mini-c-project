
#include <stdio.h>

int main() {
    char op;
    double a, b, result;

    printf("Voer een operator in (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Voer twee getallen in: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Fout: delen door nul is niet toegestaan.\n");
                return 1;
            }
            result = a / b;
            break;
        default:
            printf("Ongeldige operator.\n");
            return 1;
    }

    printf("Resultaat: %.2f\n", result);

    // Kleine aanpassing toegevoegd door Ersan
    printf("Bedankt voor het gebruiken van deze calculator! - Ersan\n");

    return 0;
}

//Ensar isci was here xD
