/*Create a class Rectangle with private data members length and width. 
  Implement member functions to:
   - Set the dimensions of the rectangle.
   - Calculate and return the area of the rectangle.
   - Calculate and return the perimeter of the rectangle.
   Ensure that the dimensions cannot be accessed directly from outside the class.*/


#include <iostream>

class rectangle{

  int lenght, width;

public:
  void SetLenght(int a){

    lenght = a;

  }
  int GetLeght(){

    return lenght;
  }

  void SetWidth(int a){

    width = a;

  }
  int GetWidth(){

    return width;
  }
  int Area(){

    return lenght*width;

  }
  int Perimeter(){

    return (2*lenght)+(2*width);
  }
};

int main()
{
  int x,y;
  rectangle bob;

  std::cout << "enter lenght:" << std::endl;
  std::cin >> x;
  bob.SetLenght(x);
  std::cout << "enter width" << std::endl;
  std::cin >> y;
  bob.SetWidth(y);
  std::cout << "area:" << bob.Area() << std::endl << "Perimeter:" << bob.Perimeter();

  return 0;
}
