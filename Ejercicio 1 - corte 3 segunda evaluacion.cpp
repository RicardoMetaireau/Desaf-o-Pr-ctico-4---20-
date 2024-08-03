#include <iostream>  
#include <cstdlib>  
#include <ctime>  
#include <vector>  

using namespace std; // acceso al espacio standard  

// Funci�n para verificar si un n�mero es primo  
bool esPrimo(int numero) {  
    if (numero <= 1) return false; // El 0 y 1 no son primos  
    for (int i = 2; i * i <= numero; ++i) {  
        if (numero % i == 0)  
            return false; // Si es divisible por alg�n n�mero, no es primo  
    }  
    return true; // Si no es divisible, es primo  
}  

// Funci�n que genera un arreglo de 20 n�meros aleatorios entre 0 y 99  
void generarNumerosAleatorios(int numeros[], const int TAM) {  
    for (int i = 0; i < TAM; ++i) {  
        numeros[i] = rand() % 100; // Genera n�mero aleatorio entre 0 y 99  
    }  
}  

// Funci�n que filtra los n�meros primos del arreglo  
void filtrarNumerosPrimos(int numeros[], const int TAM, vector<int>& primos) {  
    for (int i = 0; i < TAM; ++i) {  
        if (esPrimo(numeros[i])) {  
            primos.push_back(numeros[i]); // Agregar n�mero primo al vector  
        }  
    }  
}  

// Funci�n para mostrar un arreglo  
void mostrarArreglo(const char* mensaje, int numeros[], const int TAM) {  
    cout << mensaje;  
    for (int i = 0; i < TAM; ++i) {  
        cout << numeros[i] << " "; // Muestra los n�meros en el arreglo  
    }  
    cout << endl;  
}  

// Funci�n para mostrar los datos del creador en un cuadro  
void mostrarDatosCreador() {  
    cout << string(29, '-') << endl;  
    cout << "| " << string(8, ' ') << "Creado por:   " << string(4, ' ') << "|" << endl;  
    cout << "| " << string(6, ' ') << "Ricardo Rosas " << string(6, ' ') << "|" << endl;  
    cout << "| " << string(6, ' ') << "- 26.739.488 -" << string(6, ' ') << "|" << endl;  
    cout << string(29, '-') << endl;  
}  

// Funci�n principal  
int main() {  
    const int TAM = 20; // Tama�o del arreglo  
    char opcion; // Opci�n del usuario  

    // Inicializar generador de n�meros aleatorios  
    srand(static_cast<unsigned int>(time(0)));  

    // Cabecera del programa  
    cout << string(50, '-') << "\n";   
    cout << "Programa para generar y filtrar numeros primos\n";   
	cout << string(50, '-') << "\n";   

    do {  
        cout << string(88, '-') << "\n";  
        
        int numeros[TAM]; // Arreglo para almacenar n�meros aleatorios  
        vector<int> primos; // Vector para almacenar n�meros primos  

        // Generar 20 n�meros aleatorios entre 0 y 99  
        generarNumerosAleatorios(numeros, TAM);  

        // Filtrar los n�meros primos  
        filtrarNumerosPrimos(numeros, TAM, primos);  

        // Mostrar el arreglo de n�meros aleatorios  
        mostrarArreglo("Numeros aleatorios generados: ", numeros, TAM);  

        // Mostrar el arreglo de n�meros primos  
        mostrarArreglo("Numeros primos encontrados: ", primos.data(), primos.size());  

		cout << string(88, '-') << "\n"; 
		 
        // Preguntar al usuario si desea continuar  
        cout << "Desea generar otro conjunto de numeros? (s/n): ";  
        cin >> opcion;  

    } while (opcion == 's' || opcion == 'S'); // Continuar mientras la opci�n sea 's' o 'S'  

    cout << "Saliendo del programa." << endl;  

    // Mostrar datos del creador en un cuadro  
    mostrarDatosCreador();  
    
    return 0;  
}  
