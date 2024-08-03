#include <iostream>  
#include <cstdlib>  
#include <ctime>  
#include <iomanip> // Para std::setw  

using namespace std;  

const int FILAS = 4;  
const int COLUMNAS = 5;  

// Funci�n para generar n�meros aleatorios en la matriz  
void generarNumeros(int matriz[FILAS][COLUMNAS]) {  
    srand(static_cast<unsigned int>(time(0))); // Inicializa el generador de n�meros aleatorios  
    for (int i = 0; i < FILAS; ++i) {  
        for (int j = 0; j < COLUMNAS; ++j) {  
            matriz[i][j] = rand() % 10; // Genera n�meros aleatorios entre 0 y 9  
        }  
    }  
}  

// Funci�n para mostrar la matriz y calcular las sumas  
void mostrarMatrizYSumas(int matriz[FILAS][COLUMNAS]) {  
    int sumasFilas[FILAS] = {0}; // Arreglo para almacenar la suma de cada fila  
    int sumasColumnas[COLUMNAS] = {0}; // Arreglo para almacenar la suma de cada columna  
    int sumaTotal = 0; // Suma total  
	
	cout << string(30, '-') << "\n"; 
    cout << "| " << setw(6) << "Matriz de numeros:\n"; 
	cout << string(30, '-') << "\n";
    for (int i = 0; i < FILAS; ++i) {  
        for (int j = 0; j < COLUMNAS; ++j) {  
            cout << setw(4) << matriz[i][j]; // Muestra el n�mero con formato  
            sumasFilas[i] += matriz[i][j]; // Suma en la fila  
            sumasColumnas[j] += matriz[i][j]; // Suma en la columna  
            sumaTotal += matriz[i][j]; // Suma total  
        }  
        cout << " | " << sumasFilas[i]; // Muestra la suma parcial de la fila  
        cout << endl;  
    }  

    // Muestra la suma de las columnas  
    for (int j = 0; j < COLUMNAS; ++j) {  
        cout << "-----"; // Separador para las columnas  
    }  
    cout << "---\n";  

    for (int j = 0; j < COLUMNAS; ++j) {  
        cout << setw(4) << sumasColumnas[j]; // Muestra la suma parcial de cada columna  
    }  

    cout << " | " << sumaTotal; // Muestra la suma total en la esquina inferior derecha  
    cout << endl;  
}  

// Funci�n para mostrar los datos del creador  
void mostrarDatosCreador() {  
    
	// Muestra un cuadro con los datos del creador  
    cout << "\n" << string(30, '-') << "\n"; // L�nea superior del cuadro  
    cout << "| " << setw(26) << "Creado por Ricardo Rosas" << " |\n";  
    cout << "| " << setw(26) << "- 26.739.488 -" << " |\n";  
    cout << std::string(30, '-') << "\n"; // L�nea inferior del cuadro  
}  

int main() {  
    char continuar;  
    do {  
        int matriz[FILAS][COLUMNAS];  

        generarNumeros(matriz);  
        mostrarMatrizYSumas(matriz);  
        mostrarDatosCreador(); // Llama a la funci�n para mostrar los datos del creador  

        // Pregunta al usuario si desea salir  
        cout << "Desea salir? (s/n): ";  
        cin >> continuar;  
        
    } while (continuar != 's' && continuar != 'S'); // Contin�a hasta que se ingrese 's' o 'S'  

    return 0;  
} 
