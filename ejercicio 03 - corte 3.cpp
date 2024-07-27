#include <iostream>  
#include <string>  
#include <iomanip> // Para std::setprecision  

using namespace std;  // acceso al espacio std

int main() {  
    string nombreCliente;  
    string producto;  
    double precio;  
    int cantidad;  
    int tipoProducto;  
    char continuar; // Para preguntar si desea continuar o salir  
  
    cout << "+----------------------------------+" << endl;  
    cout << "|      Creado por Ricardo Rosas     |" << endl;  
    cout << "|            - 26739488 -           |" << endl;  
    cout << "+----------------------------------+" << endl;  

    // Bucle para repetir el proceso    
    
    do {  
        
        // Separador
        
		cout << "__________________________________________" << endl;  

        // Solicitar datos del cliente  
        
		cout << "Ingrese el nombre del cliente: ";  
        getline(cin, nombreCliente);  

        // Mostrar menú de selección  
        
		cout << "Seleccione el tipo de producto:\n";  
        cout << "1. Fruta\n";  
        cout << "2. Verdura\n";  
        cout << "3. Abarrotes\n";  
        cout << "Ingrese el codigo del producto (1-3): ";  
        cin >> tipoProducto;  

        // Asignar el nombre del producto según la selección  
       
	    switch(tipoProducto) {  
            case 1:  
                producto = "Fruta";  
                break;  
            case 2:  
                producto = "Verdura";  
                break;  
            case 3:  
                producto = "Abarrotes";  
                break;  
            default:  
                cout << "Opcion no valida. Saliendo del programa." << endl;  
                return 1; // Salir del programa si la opción es inválida  
        }  

        cout << "Ingrese el precio del producto: ";  
        cin >> precio;  
        cout << "Ingrese la cantidad: ";  
        cin >> cantidad;  

        // Calcular subtotal  
       
	    double subtotal = precio * cantidad;  

        // Calcular descuento  
        
		double descuento = 0.0;  
        if (subtotal > 1000) {  
            descuento = subtotal * 0.20; // 20% de descuento  
        }  

        // Calcular total a pagar  
       
	    double totalAPagar = subtotal - descuento;  

        // Mostrar resultados  
       
	    cout << fixed << setprecision(2); // Para mostrar dos decimales  
        cout << "_________________________________________________" << endl;  
        cout << "  - Hortalizas el Tuy -  " << endl;  
        cout << "\nNombre del cliente: " << nombreCliente << endl;  
        cout << "Producto        : " << producto << endl;  
        cout << "Precio          : Bs." << precio << endl;  
        cout << "Cantidad        : "    << cantidad << endl;  
        cout << "Subtotal        : Bs." << subtotal << endl;  
        cout << "______________________________" << endl;
		cout << "                              " << endl;
		cout << "Descuento    20%     "          << endl;  
        cout << "Por cada Bs.1000: Bs. "         << descuento << endl;
		cout << "______________________________" << endl;
		cout << "Total a pagar: Bs."    << totalAPagar << endl;  
		cout << "                              " << endl;
        
		// Preguntar si desea continuar o salir  
        
		cout << "Desea realizar otra operacion? (s/n): ";  
        cin >> continuar;  
        cin.ignore(); // Limpiar el buffer de entrada  
    } while (continuar == 's' || continuar == 'S'); // Repetir el proceso si la opción es 's' o 'S'  

    return 0;  
}  
