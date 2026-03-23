#include <iostream>
using namespace std;

int main() {
    int nota;
    int suma = 0;
    int aprobadas = 0;
    int reprobadas = 0;

    for (int contador = 1; contador <= 5; contador++) {
        cout << "Ingrese la nota " << contador << ": ";
        cin >> nota;

        suma += nota;

        if (nota >= 61) {
            aprobadas++;
        } else {
            reprobadas++;
        }
    }

    double promedio = suma / 5.0;

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Notas aprobadas: " << aprobadas << endl;
    cout << "Notas reprobadas: " << reprobadas << endl;

    if (promedio >= 61) {
        cout << "Resultado final: Aprueba" << endl;
    } else {
        cout << "Resultado final: Reprueba" << endl;
    }

    return 0;
}