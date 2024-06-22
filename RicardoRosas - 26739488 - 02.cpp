#include <iostream>
#include <cmath>

int main() {
    int limite, base, potencia;
    char continuar;
    char usuario[10];
	system("color F4"); 
	
    do {
      
      // Borrar los datos anteriores
       
	     system ("cls");
			
		// Datos del creador
        
		 std::cout << "Creado por Ricardo Rosas - 26739488 " << std::endl;
    
	   //Datos del usuario
        
		std::cout << "Ingrese su nombre: ";
        std::cin >> usuario;
        
	  // Solicitar al usuario el límite y la base
        
		std::cout << "Ingrese el limite maximo de entero positivo: ";
        std::cin >> limite;

        std::cout << "Ingrese la base entera positiva: ";
        std::cin >> base;

      // Mostrar las potencias de la base menores que el límite máximo
       
	    for (int i = 0; ;++i) {
            potencia = pow(base, i);
            if (potencia >= limite)
                break;
            std::cout << base << " elevado a la " << i << " = " << potencia << std::endl;
        }

      // Preguntar si desea salir del programa o continuar
        
		std::cout << usuario;
	    std::cout << " - Desea salir del programa? (s/n): ";
        std::cin >> continuar;

    } while (continuar != 's' && continuar != 'S');
    
    // Mensaje de despedida
    
	    std::cout << usuario;
		std::cout << " Gracias por usar el programa." << std::endl; 

    return 0;
}
