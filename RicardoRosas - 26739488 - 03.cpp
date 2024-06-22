#include <iostream>

int main() {
    int puntuacion1, puntuacion2, puntuacion3, puntuacion4;
    char choice;
    char usuario[10];
	system("color F0"); 
	
    do {
      
      // Borrar los datos anteriores
       
	     system ("cls");
			
	  // Datos del creador
        
		 std::cout << "Creado por Ricardo Rosas - 26739488 " << std::endl;
    
	  //Datos del usuario
        
		std::cout << "Ingrese su nombre: ";
        std::cin >> usuario;
        
	  // Solicitar al usuario que ingrese las cuatro puntuaciones
       
	    std::cout << "Ingrese la primera puntuacion (entre 0 y 100): ";
        std::cin >> puntuacion1;
        std::cout << "Ingrese la segunda puntuacion (entre 0 y 100): ";
        std::cin >> puntuacion2;
        std::cout << "Ingrese la tercera puntuacion (entre 0 y 100): ";
        std::cin >> puntuacion3;
        std::cout << "Ingrese la cuarta puntuacion (entre 0 y 100): ";
        std::cin >> puntuacion4;

      // Calcular la media de las puntuaciones
        
		double media = (puntuacion1 + puntuacion2 + puntuacion3 + puntuacion4) / 4.0;

      // Imprimir la media de las puntuaciones
       
	    std::cout << "Media de las puntuaciones: " << media << std::endl;

      // Determinar la nota correspondiente a la media
        
		char nota;
        if (media >= 90) {
            nota = 'A';
        } else if (media >= 80) {
            nota = 'B';
        } else if (media >= 70) {
            nota = 'C';
        } else if (media >= 60) {
            nota = 'D';
        } else {
            nota = 'E';
        }

      // Mostrar la tabla de notas
        
		std::cout << "Tabla de notas:" << std::endl;
        std::cout << "90-100: A" << std::endl;
        std::cout << "80-90: B" << std::endl;
        std::cout << "70-80: C" << std::endl;
        std::cout << "60-70: D" << std::endl;
        std::cout << "0-60: E" << std::endl;
        std::cout << "Nota obtenida: " << nota << std::endl;

      // Preguntar al usuario si desea continuar
        
		std::cout << usuario;
	    std::cout << " Desea continuar? (S/N): ";
        std::cin >> choice;

      // Continuar si el usuario ingresa 'S'

    } while (toupper(choice) == 'S'); 

      // Mensaje de despedida
   
    std::cout << usuario;
    std::cout << " Gracias por usar el programa" << std::endl;

    return 0;
}
