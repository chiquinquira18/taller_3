#include <iostream>
#include <cmath>
using namespace std;

double elevar_a_la_potencia(double numero, double potencia) {
    return pow(numero, potencia);
}

int main() {
    double numero, potencia;
    cout << "Ingrese un número: ";
    cin >> numero;
    cout << "Ingrese la potencia: ";
    cin >> potencia;
    cout << numero << " elevado a la potencia " << potencia << " es igual a " << elevar_a_la_potencia(numero, potencia) << endl;
    return 0;
}
