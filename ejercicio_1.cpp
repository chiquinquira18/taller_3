#include <iostream>
using namespace std;

int main() {
    float centimetros, pulgadas;
    cout << "Ingrese la longitud en centímetros: ";
    cin >> centimetros;
    pulgadas = centimetros / 2.54;
    cout << centimetros << " cm es igual a " << pulgadas << " pulgadas.";
    return 0;
}