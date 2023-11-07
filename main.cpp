#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int maxValor;

    // Paso 1: Solicita al usuario que ingrese el valor máximo para buscar triples pitagóricos.
    printf("Paso 1: Ingresa el valor máximo para buscar triples pitagóricos: ");
    scanf("%d", &maxValor);

    printf("Paso 2: Triples Pitagóricos:\n");

    // Paso 3: Utiliza un bucle para iterar a través de valores potenciales para "a".
    for (a = 1; a <= maxValor; a++) {
        // Paso 4: Dentro del primer bucle, utiliza un segundo bucle para iterar a través de valores potenciales para "b".
        for (b = a; b <= maxValor; b++) {
            // Paso 5: Calcula el tercer lado del triángulo (c) usando la fórmula c = sqrt(a^2 + b^2).
            c = sqrt(a * a + b * b);

            // Paso 6: Verifica si los tres lados forman un triple pitagórico.
            if (c * c == a * a + b * b) {
                // Imprime el triple pitagórico.
                printf("Triple Pitagórico: (%d, %d, %d)\n", a, b, c);
            }
        }
    }

    return 0;
}

