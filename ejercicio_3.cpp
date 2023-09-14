#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " es un número par.";
    } else {
        cout << num << " es un número impar.";
    }

    return 0;
}
