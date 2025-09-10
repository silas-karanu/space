#include <iostream>

int main() {

  double weight; 
  int planet_number;

  std::cout << "What is your weight on Earth?: "; std::cin >> weight;

  std::cout << "Enter a number for planets from 1 to 7: ";
  std::cin >> planet_number;

  switch(planet_number){
    case 1 :
        std::cout << "Mercury: " <<(weight) * 0.38 << "kgs\n";
        break;

    case 2 :
        std::cout << "Venus: " <<(weight) * 0.91 << "kgs\n";
        break;

    case 3 :
        std::cout << "Mars: " <<(weight) * 0.38 << "kgs\n";
        break;

    case 4 :
        std::cout << "Jupiter: " <<(weight) * 2.34 << "kgs\n";
        break;

    case 5 :
        std::cout << "Saturn: " <<(weight) * 1.06 << "kgs\n";
        break;

    case 6 :
        std::cout << "Uranus: " <<(weight) * 0.92 << "kgs\n";
        break;
        
    case 7 :
        std::cout << "Neptune: " <<(weight) * 1.19 << "kgs\n";
        break;

    default :
        std::cout << "Invalid\n";
        break;


  }
  
  
  
  
  
  
  
  
  
  
  
}