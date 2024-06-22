#include <iostream>

int main() {
    
	int edad1, edad2, edad3;
    char choice;
	char usuario[10]; 
	system ("color 0A");
	
    do {
      
	   // Borrar los datos anteriores
       
	     system ("cls"); 
	     
	  // Datos del creador
       
	    std::cout << "Creado por Ricardo Rosas - 26739488 " << std::endl;  
	    
	    //Datos del usuario
        
		std::cout << "Ingrese su nombre: ";
        std::cin >> usuario;
	    
	  // Solicitar al usuario que ingrese las edades de los tres hijos
       
	    std::cout << "Ingrese la edad del primer hijo: ";
        std::cin >> edad1;
        std::cout << "Ingrese la edad del segundo hijo: ";
        std::cin >> edad2;
        std::cout << "Ingrese la edad del tercer hijo: ";
        std::cin >> edad3;

      // Encontrar la edad mayor
       
	    int edadMayor = edad1;
        if (edad2 > edadMayor) {
            edadMayor = edad2;
        }
        if (edad3 > edadMayor) {
            edadMayor = edad3;
        }

      // Encontrar la edad menor
      
	    int edadMenor = edad1;
        if (edad2 < edadMenor) {
            edadMenor = edad2;
        }
        if (edad3 < edadMenor) {
            edadMenor = edad3;
        }

      // Calcular la media de las edades
       
	    double media = (edad1 + edad2 + edad3) / 3.0;

      // Mostrar resultados
       
	    std::cout << "Edad mayor: " << edadMayor << std::endl;
        std::cout << "Edad menor: " << edadMenor << std::endl;
        std::cout << "Media de las edades: " << media << std::endl;
        
      // Preguntar al usuario si desea continuar
        
		std::cout << usuario;
		std::cout << " Desea continuar? (S/N): ";
        std::cin >> choice;

    } 

	// Continuar si el usuario ingresa 'S'

		while (toupper(choice) == 'S'); 
    
	// Mensaje de despedida
         
		 std::cout << usuario;
   		 std::cout << " Gracias por usar el programa" << std::endl; 

    return 0;
}
