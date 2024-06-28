#include <iostream>
#include <cmath>

using namespace std;

// Fun��o para calcular o delta
float calcularDelta(float A, float B, float C) {
    return (B * B) - (4 * A * C);
}

// Fun��o para calcular a primeira raiz (x1)
float calcularRaiz1(float A, float B, float delta) {
    return (-B + sqrt(delta)) / (2 * A);
}

// Fun��o para calcular a segunda raiz (x2)
float calcularRaiz2(float A, float B, float delta) {
    return (-B - sqrt(delta)) / (2 * A);
}

// Fun��o para calcular o v�rtice x
float calcularVerticeX(float A, float B) {
    return -B / (2 * A);
}

// Fun��o para calcular o v�rtice y
float calcularVerticeY(float A, float B, float C, float vx) {
    return A * vx * vx + B * vx + C;
}

int main() {
    float A, B, C;

    // Ler os coeficientes da fun��o de segundo grau
    cout << "Digite os coeficientes da fun��o de segundo grau (A, B, C): ";
    cin >> A >> B >> C;

    // Calcular o delta
    float delta = calcularDelta(A, B, C);

    // Verificar se a fun��o possui ra�zes reais
    if (delta >= 0) {
        // Calcular as ra�zes
        float x1 = calcularRaiz1(A, B, delta);
        float x2 = calcularRaiz2(A, B, delta);

        // Calcular o v�rtice
        float vx = calcularVerticeX(A, B);
        float vy = calcularVerticeY(A, B, C, vx);

        cout << "\nDelta: " << delta << "\n";
        cout << "Raiz 1 (x1): " << x1 << "\n";
        cout << "Raiz 2 (x2): " << x2 << "\n";
        cout << "V�rtice (vx, vy): (" << vx << ", " << vy << ")\n";
    }
    else {
        cout << "\nDelta � negativo, a fun��o n�o possui ra�zes reais.\n";
    }

    return 0;
}
