#include <iostream>  
#include <cstdlib>  
#include <ctime>  
#include <vector>  

using namespace std; // acceso al espacio standard  

// Función para verificar si un número es primo  
bool esPrimo(int numero) {  
    if (numero <= 1) return false; // El 0 y 1 no son primos  
    for (int i = 2; i * i <= numero; ++i) {  
        if (numero % i == 0)  
            return false; // Si es divisible por algún número, no es primo  
    }  
    return true; // Si no es divisible, es primo  
}  

// Función que genera un arreglo de 20 números aleatorios entre 0 y 99  
void generarNumerosAleatorios(int numeros[], const int TAM) {  
    for (int i = 0; i < TAM; ++i) {  
        numeros[i] = rand() % 100; // Genera número aleatorio entre 0 y 99  
    }  
}  

// Función que filtra los números primos del arreglo  
void filtrarNumerosPrimos(int numeros[], const int TAM, vector<int>& primos) {  
    for (int i = 0; i < TAM; ++i) {  
        if (esPrimo(numeros[i])) {  
            primos.push_back(numeros[i]); // Agregar número primo al vector  
        }  
    }  
}  

// Función para mostrar un arreglo  
void mostrarArreglo(const char* mensaje, int numeros[], const int TAM) {  
    cout << mensaje;  
    for (int i = 0; i < TAM; ++i) {  
        cout << numeros[i] << " "; // Muestra los números en el arreglo  
    }  
    cout << endl;  
}  

// Función para mostrar los datos del creador en un cuadro  
void mostrarDatosCreador() {  
    cout << string(29, '-') << endl;  
    cout << "| " << string(8, ' ') << "Creado por:   " << string(4, ' ') << "|" << endl;  
    cout << "| " << string(6, ' ') << "Ricardo Rosas " << string(6, ' ') << "|" << endl;  
    cout << "| " << string(6, ' ') << "- 26.739.488 -" << string(6, ' ') << "|" << endl;  
    cout << string(29, '-') << endl;  
}  

// Función principal  
int main() {  
    const int TAM = 20; // Tamaño del arreglo  
    char opcion; // Opción del usuario  

    // Inicializar generador de números aleatorios  
    srand(static_cast<unsigned int>(time(0)));  

    // Cabecera del programa  
    cout << string(50, '-') << "\n";   
    cout << "Programa para generar y filtrar numeros primos\n";   
	cout << string(50, '-') << "\n";   

    do {  
        cout << string(88, '-') << "\n";  
        
        int numeros[TAM]; // Arreglo para almacenar números aleatorios  
        vector<int> primos; // Vector para almacenar números primos  

        // Generar 20 números aleatorios entre 0 y 99  
        generarNumerosAleatorios(numeros, TAM);  

        // Filtrar los números primos  
        filtrarNumerosPrimos(numeros, TAM, primos);  

        // Mostrar el arreglo de números aleatorios  
        mostrarArreglo("Numeros aleatorios generados: ", numeros, TAM);  

        // Mostrar el arreglo de números primos  
        mostrarArreglo("Numeros primos encontrados: ", primos.data(), primos.size());  

		cout << string(88, '-') << "\n"; 
		 
        // Preguntar al usuario si desea continuar  
        cout << "Desea generar otro conjunto de numeros? (s/n): ";  
        cin >> opcion;  

    } while (opcion == 's' || opcion == 'S'); // Continuar mientras la opción sea 's' o 'S'  

    cout << "Saliendo del programa." << endl;  

    // Mostrar datos del creador en un cuadro  
    mostrarDatosCreador();  
    
    return 0;  
}  
