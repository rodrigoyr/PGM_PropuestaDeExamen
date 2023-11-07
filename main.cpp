#include <iostream>
#include <cmath>

int main() {
    int max_valor = 100; // Puedes ajustar el valor máximo según tus necesidades

    for (int a = 1; a <= max_valor; a++) {
        for (int b = a; b <= max_valor; b++) {
            double c = std::sqrt(a * a + b * b);

            if (c == std::round(c) && a + b > c) {
                std::cout << "Triple pitagórico: " << a << ", " << b << ", " << static_cast<int>(c) << std::endl;
            }
        }
    }

    return 0;
}
