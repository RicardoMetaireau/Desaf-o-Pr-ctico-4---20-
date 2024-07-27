#include <iostream>  
#include <cstdlib>  // Para rand() y srand()  
#include <ctime>    // Para time()  
#include <string>   // Para string y getline  

using namespace std; // acceso al espacio std 

// Método que genera un número entero aleatorio dentro de un rango específico  

int generarNumeroAleatorio(int min, int max) {  
    return min + rand() % (max - min + 1);  
}  

int main() {  
    int cantidadNumeros;  
    int limiteInferior, limiteSuperior;  

    // Semilla para el generador de números aleatorios  

    srand(static_cast<unsigned int>(time(0)));  

    // Datos del creador
    
    cout << "+----------------------------------+" << endl;  
    cout << "|      Creado por Ricardo Rosas     |" << endl;  
    cout << "|            - 26739488 -           |" << endl;  
    cout << "+----------------------------------+" << endl;  

    // Bucle principal  
   
    do { 
	
	 	// Separador
	 	
	 	cout << "___________________________________________________" << endl;
       
	    // Solicitar al usuario la cantidad de números a generar  
        
		cout << "Ingrese la cantidad de numeros a generar: ";  
        cin >> cantidadNumeros;  

        // Solicitar al usuario los límites del rango  
        
		cout << "Ingrese el limite inferior: ";  
        cin >> limiteInferior;  
        cout << "Ingrese el limite superior: ";  
        cin >> limiteSuperior;  

        // Verificar que el límite inferior sea menor que el superior  
        
		if (limiteInferior > limiteSuperior) {  
            cout << "El limite inferior debe ser menor que el limite superior." << endl;  
            return 1; // Salir del programa si es inválido  
        }  

        // Generar y mostrar los números aleatorios  
       
	    cout << "Numeros aleatorios generados:" << endl;  
        for (int i = 0; i < cantidadNumeros; ++i) {  
            int numeroAleatorio = generarNumeroAleatorio(limiteInferior, limiteSuperior);  
            cout << numeroAleatorio << " ";  
        }  
        cout << endl; // Para terminar con un salto de línea  

        // Preguntar si desea continuar  
        
		string continuar;  
        cout << "Desea generar mas numeros? (s/n): ";  
        cin >> continuar;  

        // Validar la entrada  
       
	    while (continuar != "s" && continuar != "n" && continuar != "S" && continuar != "N") {  
            cout << "Opción inválida. Por favor ingrese 's' para continuar o 'n' para salir: ";  
            cin >> continuar;  
        }  

        // Salir del bucle si la respuesta es 'n' o 'N'  
        
		if (continuar == "n" || continuar == "N") {   
            break;  // Salir del bucle  
        }  

    } while (true);  // Repetir hasta que el usuario decida salir  

    return 0;  
}   
