/*
	Número primo en C++ o CPP
	https://parzibyte.me/blog
*/
#include <iostream>
// Definir prototipo de función
bool esPrimo(int numero);

int main() {
    int numero=0;;
    while(numero!=-1){
  
  std::cout << "Escribe un numero y te dire si es primo:\n";
  std::cin >> numero;
  if (esPrimo(numero)) {
    std::cout << "Es primo"<<std::endl;
  } else {
    std::cout << "NO es primo"<< std::endl;
  }

}
}

bool esPrimo(int numero) {
  // Casos especiales
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  // Si no se pudo dividir por ninguno de los de arriba, sí es primo
  return true;
}