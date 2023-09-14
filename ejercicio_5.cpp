#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num;
    cout << "Ingrese un número : ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial de un número negativo no está definido.";
    } else {
        cout << "El factorial de " << num << " es " << factorial(num) << ".";
    }

    return 0;
}
