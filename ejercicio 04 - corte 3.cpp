#include <iostream>  
#include <thread>  // Para std::this_thread::sleep_for  
#include <chrono>  // Para std::chrono::seconds  

using namespace std; // acceso al espacio std  

// Indicador del estado de las puertas

void abrirPuertas() {  
    cout << "Se han abierto las puertas del ascensor." << endl;  
}  

void cerrarPuertas() {  
    cout << "Se han cerrado las puertas del ascensor." << endl;  
}  

int main() {  
   
    int pisoDestino;  // Variable para almacenar el piso que quiere el usuario  
    int pisoActual = 0; // El piso actual (inicia en el piso 0)  
    char otraVez;  // Variable para preguntar si desea usar el ascensor nuevamente  

    // Datos del creador
   
    cout << "+----------------------------------+" << endl;  
    cout << "|      Creado por Ricardo Rosas     |" << endl;  
    cout << "|            - 26739488 -           |" << endl;  
    cout << "+----------------------------------+" << endl;  

    do {  
        // Separador
       
	    cout << "____________________________________________" << endl;
        
		// Solicitar al usuario que ingrese el número del piso  
       
	    cout << "Ingrese el piso al que desea ir (1-10): ";  
        cin >> pisoDestino;  // Leer el piso destino del usuario  

        // Validar que el piso ingresado esté dentro de un rango válido  
        
		if (pisoDestino < 1 || pisoDestino > 10) {  
            cout << "Numero de piso invalido. Elija un numero entre 1 y 10." << endl;  
            continue; // Volver a pedir un piso si el número de piso es inválido  
        }  

        // Abrir las puertas del ascensor antes de iniciar el viaje  
       
	    abrirPuertas();  

        // Cerrar las puertas antes de comenzar a subir  
        
		cerrarPuertas();  

        // Simulación del movimiento del ascensor  
       
	    if (pisoDestino > pisoActual) {  
            cout << "El ascensor va subiendo." << endl;  // Indicar que el ascensor está subiendo  
            for (int piso = pisoActual + 1; piso <= pisoDestino; ++piso) {  
                cout << "El ascensor se encuentra en el piso " << piso << "..." << "Subiendo" << endl;  
                this_thread::sleep_for(chrono::seconds(1)); // Espera de un segundo entre pisos  
            }  
        } else if (pisoDestino < pisoActual) {  
            cout << "El ascensor va bajando." << endl;  // Indicar que el ascensor está bajando  
            for (int piso = pisoActual - 1; piso >= pisoDestino; --piso) {  
                cout << "El ascensor se encuentra en el piso " << piso << "..." << "Bajando" << endl;  
                this_thread::sleep_for(chrono::seconds(1)); // Espera de un segundo entre pisos  
            }  
        } else {  
            cout << "El ascensor ya esta en el piso " << pisoDestino << "." << endl;  
        }  
        
        // Mensaje que indica que el ascensor ha llegado al piso destino  
        
		cout << "El ascensor ha llegado al piso " << pisoDestino << "." << endl;  

        // Abrir las puertas al llegar al destino  
       
	    abrirPuertas();  

        // Preguntar al usuario si desea volver a usar el ascensor  
       
	    cout << "Desea usar el ascensor nuevamente? (s/n): ";  
        cin >> otraVez;  

        // Actualizar el piso actual al destino alcanzado  
        
		pisoActual = pisoDestino;  

    } while (otraVez == 's' || otraVez == 'S');  // Continuar si el usuario responde 's' o 'S'  
  
    return 0;  // Fin del programa  
} 
