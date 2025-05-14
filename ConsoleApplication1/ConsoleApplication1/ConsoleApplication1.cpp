#include <iostream>
#include <string>
#include "Dato.h"
#include "Nodo.h"
using namespace std;


// Clase Nodo para lista enlazada

// Función principal
int main() {
    Nodo* inicio = nullptr;
    Nodo* fin = nullptr;
    int opcion;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. ¿La lista está vacía?\n";
        cout << "2. Encolar (Agregar elemento)\n";
        cout << "3. Mostrar lista\n";
        cout << "4. Eliminar por código\n";
        cout << "5. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << (inicio == nullptr ? "La lista está vacía.\n" : "La lista contiene elementos.\n");
            break;
        case 2:
            Nodo::Encolar(inicio, fin);
            break;
        case 3:
            Nodo::MostrarLista(inicio);
            break;
        case 4: {
            int cod;
            cout << "Ingrese el código del nodo a eliminar: ";
            cin >> cod;
            Nodo::EliminarPorCodigo(inicio, fin, cod);
            break;
        }
        case 5:
            cout << "Saliendo del programa.\n";
            break;
        default:
            cout << "Opción inválida.\n";
        }
    } while (opcion != 5);

    return 0;
}
