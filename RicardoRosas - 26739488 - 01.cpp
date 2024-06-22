#include <iostream>

int main() {
    
	int num1, num2, num3;
    char choice;
    char usuario[10];
	system("color F1"); 
        
        
	do {
       
       // Borrar los datos anteriores
       
	     system ("cls");
			
		// Datos del creador
        
		 std::cout << "Creado por Ricardo Rosas - 26739488 " << std::endl;
    
	   //Datos del usuario
        
		std::cout << "Ingrese su nombre: ";
        std::cin >> usuario;
	
		// Solicitar al usuario que ingrese tres números enteros
       
	    std::cout << "Por favor ingrese tres numeros enteros: ";
        std::cin >> num1 >> num2 >> num3;

        // Verificar si los números están en orden numérico
        
		if (num1 < num2 && num2 < num3) {
            std::cout << "Los numeros estan en orden numerico ascendente." << std::endl;
        } else if (num1 > num2 && num2 > num3) {
            std::cout << "Los numeros estan en orden numerico descendente." << std::endl;
        } else {
            std::cout << "Los numeros no estan en orden numerico." << std::endl;
        }

        // Preguntar al usuario si desea continuar
        
		std::cout << usuario;
		std::cout << " Desea continuar? (S/N): ";
		std::cin >> choice; 
        
	   // Continuar si el usuario ingresa 'S'
    
	} while (toupper(choice) == 'S'); 

      // Mensaje de despedida
    	
		std::cout << usuario;
	    std::cout << " Gracias por usar el programa." << std::endl; 
	     

    return 0;
}
