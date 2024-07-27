#include <iostream>  // Para entrada y salida de datos  
#include <cmath>     // Para funciones matem�ticas como pow()  

const double PI = 3.14;  // Valor constante de PI  
using namespace std;    // acceso al espacio std

// Clase para calcular �reas de diferentes figuras  

class AreaCalculator {  
public:  
   
    // M�todo para calcular el �rea de un c�rculo dado su radio  
   
    double calcularAreaCirculo(double radio) {  
        return PI * pow(radio, 2); // �rea = pi * r�  
    }  

    // M�todo para calcular el �rea de un tri�ngulo dado su base y altura  
   
    double calcularAreaTriangulo(double base, double altura) {  
        return (base * altura) / 2; // �rea = (base * altura) / 2  
    }  

    // M�todo para calcular el �rea de un cuadrado dado el lado  
   
    double calcularAreaCuadrado(double lado) {  
        return lado * lado; // �rea = lado * lado  
    }  
};  

int main() {  
   
    // Instancia de la clase AreaCalculator  
    
	AreaCalculator areaCalc;  
    int opcion;  // Variable para almacenar la opci�n del usuario  
    char continuar;  // Variable para determinar si el usuario quiere continuar  

    // Datos del creador del creador
        
        cout << "+----------------------------------+" << endl;  
        cout << "|      Creado por Ricardo Rosas     |" << endl;  
        cout << "|            - 26739488 -           |" << endl;  
        cout << "+----------------------------------+" << endl;  
    
    do {  
    
    	// Separador
       cout << "_________________________________________________"<< endl;
       
        // Solicitar al usuario que seleccione una figura para calcular su �rea  
        
		cout << "Selecciona la figura para calcular el area:\n";  
        cout << "1. Circulo\n";  
        cout << "2. Triangulo\n";  
        cout << "3. Cuadrado\n";  
        cout << "Opcion: ";  
        cin >> opcion;  // Leer la opci�n seleccionada por el usuario  

        // Selecci�n de la figura usando un switch  
       
	    switch (opcion) {  
            case 1: {  // Opci�n C�rculo  
                double radio;  
                cout << "Introduce el radio del circulo: ";  
                cin >> radio;  
                double area = areaCalc.calcularAreaCirculo(radio);  
                cout << "El area del circulo es: " << area << endl;  
                break;  
            }  
            case 2: {  // Opci�n Tri�ngulo  
                double base, altura;  
                cout << "Introduce la base del triangulo: ";  
                cin >> base;  
                cout << "Introduce la altura del triangulo: ";  
                cin >> altura;  
                double area = areaCalc.calcularAreaTriangulo(base, altura);  
                cout << "El area del triangulo es: " << area << endl;  
                break;  
            }  
            case 3: {  // Opci�n Cuadrado  
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

        // Preguntar al usuario si desea realizar otro c�lculo  
        
		cout << "Quieres calcular el area de otra figura? (s/n): ";  
        cin >> continuar;  

    } while (continuar == 's' || continuar == 'S');  // Repetir si el usuario ingresa 's' o 'S'  
 
    return 0;  
}  
