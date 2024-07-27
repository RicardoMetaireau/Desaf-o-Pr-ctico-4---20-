#include <iostream>  // Para entrada y salida de datos  
#include <cmath>     // Para funciones matemáticas como pow()  

const double PI = 3.14;  // Valor constante de PI  
using namespace std;    // acceso al espacio std

// Clase para calcular áreas de diferentes figuras  

class AreaCalculator {  
public:  
   
    // Método para calcular el área de un círculo dado su radio  
   
    double calcularAreaCirculo(double radio) {  
        return PI * pow(radio, 2); // Área = pi * r²  
    }  

    // Método para calcular el área de un triángulo dado su base y altura  
   
    double calcularAreaTriangulo(double base, double altura) {  
        return (base * altura) / 2; // Área = (base * altura) / 2  
    }  

    // Método para calcular el área de un cuadrado dado el lado  
   
    double calcularAreaCuadrado(double lado) {  
        return lado * lado; // Área = lado * lado  
    }  
};  

int main() {  
   
    // Instancia de la clase AreaCalculator  
    
	AreaCalculator areaCalc;  
    int opcion;  // Variable para almacenar la opción del usuario  
    char continuar;  // Variable para determinar si el usuario quiere continuar  

    // Datos del creador del creador
        
        cout << "+----------------------------------+" << endl;  
        cout << "|      Creado por Ricardo Rosas     |" << endl;  
        cout << "|            - 26739488 -           |" << endl;  
        cout << "+----------------------------------+" << endl;  
    
    do {  
    
    	// Separador
       cout << "_________________________________________________"<< endl;
       
        // Solicitar al usuario que seleccione una figura para calcular su área  
        
		cout << "Selecciona la figura para calcular el area:\n";  
        cout << "1. Circulo\n";  
        cout << "2. Triangulo\n";  
        cout << "3. Cuadrado\n";  
        cout << "Opcion: ";  
        cin >> opcion;  // Leer la opción seleccionada por el usuario  

        // Selección de la figura usando un switch  
       
	    switch (opcion) {  
            case 1: {  // Opción Círculo  
                double radio;  
                cout << "Introduce el radio del circulo: ";  
                cin >> radio;  
                double area = areaCalc.calcularAreaCirculo(radio);  
                cout << "El area del circulo es: " << area << endl;  
                break;  
            }  
            case 2: {  // Opción Triángulo  
                double base, altura;  
                cout << "Introduce la base del triangulo: ";  
                cin >> base;  
                cout << "Introduce la altura del triangulo: ";  
                cin >> altura;  
                double area = areaCalc.calcularAreaTriangulo(base, altura);  
                cout << "El area del triangulo es: " << area << endl;  
                break;  
            }  
            case 3: {  // Opción Cuadrado  
                double lado;  
                cout << "Introduce el lado del cuadrado: ";  
                cin >> lado;  
                double area = areaCalc.calcularAreaCuadrado(lado);  
                cout << "El area del cuadrado es: " << area << endl;  
                break;  
            }  
            default:  
                cout << "Opcion no valida. Por favor, selecciona una opcion correcta." << endl;  
                continue;  
        }  

        // Preguntar al usuario si desea realizar otro cálculo  
        
		cout << "Quieres calcular el area de otra figura? (s/n): ";  
        cin >> continuar;  

    } while (continuar == 's' || continuar == 'S');  // Repetir si el usuario ingresa 's' o 'S'  
 
    return 0;  
}  
