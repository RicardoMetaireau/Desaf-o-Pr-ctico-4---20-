#include <iostream>  
#include <iomanip> // Para setw  
using namespace std;  

// Función para mostrar los datos del creador  
void mostrarDatosCreador() {  
    // Muestra un cuadro con los datos del creador  
    cout << "\n" << string(30, '-') << "\n"; // Línea superior del cuadro  
    cout << "| " << setw(26) << "Creado por Ricardo Rosas" << " |\n";  
    cout << "| " << setw(26) << "- 26.739.488 -" << " |\n";   
    cout << std::string(30, '-') << "\n"; // Línea inferior del cuadro  
}  

int main() {  
    const int SIZE = 10; // Tamaño del array  
    int numeros[SIZE]; // Array para almacenar los números  
    int sumaPositivos = 0; // Suma de números positivos  
    int sumaNegativos = 0; // Suma de números negativos  
    int countPositivos = 0; // Contador de números positivos  
    int countNegativos = 0; // Contador de números negativos  
    char continuar; // Variable para determinar si se desea continuar  

    do {  
        // Leer 10 números enteros del teclado  
        cout << "Introduce 10 numeros enteros:\n";  
        for (int i = 0; i < SIZE; ++i) {  
            cin >> numeros[i];  
        }  

        // Calcular la suma y contar los positivos y negativos  
        for (int i = 0; i < SIZE; ++i) {  
            if (numeros[i] > 0) {  
                sumaPositivos += numeros[i];  
                countPositivos++;  
            } else if (numeros[i] < 0) {  
                sumaNegativos += numeros[i];  
                countNegativos++;  
            }  
        }  

        // Calcular y mostrar la media de los positivos  
        if (countPositivos > 0) {  
            double mediaPositivos = static_cast<double>(sumaPositivos) / countPositivos; // Media de positivos  
            cout << "Media de los valores positivos: " << mediaPositivos << endl;  
        } else {  
            cout << "No hay valores positivos." << endl;  
        }  

        // Calcular y mostrar la media de los negativos  
        if (countNegativos > 0) {  
            double mediaNegativos = static_cast<double>(sumaNegativos) / countNegativos; // Media de negativos  
            cout << "Media de los valores negativos: " << mediaNegativos << endl;  
        } else {  
            cout << "No hay valores negativos." << endl;  
        }  

        // Mostrar datos del creador  
        mostrarDatosCreador();  

        // Preguntar si se desea salir  
        cout << "¿Desea salir del programa? (s/n): ";  
        cin >> continuar;  

        // Reiniciar las sumas y contadores para la próxima iteración  
        sumaPositivos = 0;  
        sumaNegativos = 0;  
        countPositivos = 0;  
        countNegativos = 0;  

    } while (continuar != 's' && continuar != 'S'); // Se repite hasta que se ingrese 's' o 'S'  

    return 0;  
} 
