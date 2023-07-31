#include <iostream>
#include <string>

// Tools
constexpr int Pen { 10 };
constexpr int Marker { 20 };
constexpr int Eraser { 30 };
constexpr int Rectangle { 40 };
constexpr int Circle { 50 };
constexpr int Ellipse { 60 };

int main()
{
     int tool { Eraser };

     switch (double strength { 3.56 }; tool)
     {
          case Pen:
          {
               std::cout << "Active tool is Pen. strength : " << strength << std::endl;
          }
          break;

          case Marker:
          {
               std::cout << "Active tool is Marker. strength : " << strength << std::endl;
          }
          break;


          case Eraser:
          case Rectangle:
          case Circle:
          {
               std::cout << "Drawing Shapes. strength : " << strength << std::endl;
          }
          break;

          case Ellipse:
          {
               std::cout << "Active tool is Ellipse. strength : " << strength << std::endl;
          }
          break;

          default:
          {
               std::cout << "No match found. strength : " << strength << std::endl;
          }
          break;
     }

     std::cout << "Moving on" << std::endl;
     //strength++;

     return 0;
}