#include <iostream>
using namespace std;

int main() {
    int meses;
    int dinero;
    int suma = 0;
    int ahorroMayor;
    int mesMayor = 1;
    int ahorroDefinido = 0;


    cout << "Ingrese la cantidad de meses que desea ahorrar: ";
    cin >> meses;


    cout << "Ingrese el ahorro del mes 1: ";
    cin >> dinero;
    suma += dinero;
    ahorroMayor = dinero;

    if (dinero >= 500) {
        ahorroDefinido++;
    }

    for (int i = 2; i <= meses; i++) {
        cout << "Ingrese el ahorro del mes " << i << ": ";
        cin >> dinero;

        suma += dinero;

        if (dinero > ahorroMayor) {
            ahorroMayor = dinero;
            mesMayor = i;
        }

        if (dinero >= 500) {
            ahorroDefinido++;
        }
    }

    double promedio = suma / meses;

    cout << "Total ahorrado: Q" << suma << endl;
    cout << "Promedio mensual: Q" << promedio << endl;
    cout << "Mayor ahorro realizado en el mes: " << mesMayor << endl;
    cout << "Meses con ahorro de Q500 o mas: " << ahorroDefinido << endl;

    return 0;
}
