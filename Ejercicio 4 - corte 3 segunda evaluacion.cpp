#include <iostream>  
#include <iomanip> // Para manejar el formato de salida  
#include <limits>  // Para límites de flujo de entrada  

	using namespace std; // acceso al espacio std

	// Función para mostrar los datos del creador  
	void mostrarDatosCreador() {  
   
    // Muestra un cuadro con los datos del creador  
    cout << "\n" << string(30, '-') << "\n"; // Línea superior del cuadro  
    cout << "| " << setw(26) << "Creado por Ricardo Rosas" << " |\n";  
    cout << "| " << setw(26) << "- 26.739.488 -" << " |\n";   
    cout << std::string(30, '-') << "\n"; // Línea inferior del cuadro  
}  

// Función para ingresar notas con validación  
double ingresarNota(const string& nombreEstudiante) {  
    double nota;  
    while (true) {  
        cout << "Ingrese la nota para " << nombreEstudiante << ": ";  
        cin >> nota;  

        // Verificar si la entrada fue válida  
        if (cin.fail()) {  
            cin.clear(); // Limpiar estado de error  
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar línea  
            cout << "Error: Debe ingresar un número. Intentelo de nuevo." << endl;  
        } else {  
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer  
            return nota; // Retornar la nota válida  
        }  
    }  
}  

// Función principal del programa  
int main() {  
    
	const int SIZE = 10; // Tamaño del arreglo de estudiantes  
    string nombres[SIZE];  
    double notasCorte1[SIZE], notasCorte2[SIZE], notasCorte3[SIZE];  
    double notasFinales[SIZE];  
    char continuar; // Variable para controlar si continuar o no  

    // Bucle principal para ingresar datos y calcular notas  
    do {  
        cout << string(50, '-') << "\n"; // Cabecera del ingreso de datos  
        
        // Ingreso de datos de estudiantes  
        for (int i = 0; i < SIZE; ++i) {  
            cout << "Ingrese el nombre del estudiante " << (i + 1) << ": ";  
            cin >> nombres[i];  

            // Uso de la función para obtener notas válidas  
            notasCorte1[i] = ingresarNota(nombres[i]);  
            notasCorte2[i] = ingresarNota(nombres[i]);  
            notasCorte3[i] = ingresarNota(nombres[i]);  

            // Calcular la nota final como promedio  
            notasFinales[i] = (notasCorte1[i] + notasCorte2[i] + notasCorte3[i]) / 3.0;  
        }  

        // Mostrar la información en forma de tabla  
        cout << fixed << setprecision(2); // Configurar la precisión de los números decimales  
        cout << "\n" << setw(20) << "Estudiante"   
             << setw(15) << "Corte 1"   
             << setw(15) << "Corte 2"   
             << setw(15) << "Corte 3"   
             << setw(15) << "Nota Final" << endl;  

        cout << string(80, '-') << endl; // Línea separadora  

        // Mostrar las notas de cada estudiante  
        for (int i = 0; i < SIZE; ++i) {  
            cout << setw(20) << nombres[i]   
                 << setw(15) << notasCorte1[i]   
                 << setw(15) << notasCorte2[i]   
                 << setw(15) << notasCorte3[i]   
                 << setw(15) << notasFinales[i] << endl;  
        }  

        // Mostrar datos del creador  
        mostrarDatosCreador();  

        // Preguntar si desea continuar  
        cout << "Desea ingresar mas datos? (S/N): ";  
        cin >> continuar;  

    } while (continuar == 'S' || continuar == 's');  

    return 0;  
}  
