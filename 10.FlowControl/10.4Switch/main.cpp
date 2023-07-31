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

     switch (tool)
     {
          case Pen:
          {
               std::cout << "Active tool is Pen" << std::endl;
          }
          break;

          case Marker:
          {
               std::cout << "Active tool is Marker" << std::endl;
          }
          break;

          case Eraser:
          case Rectangle:
          case Circle:
          {
               std::cout << "Drawing Shapes" << std::endl;
          }
          break;

          case Ellipse:
          {
               std::cout << "Active tool is Ellipse" << std::endl;
          }
          break;

          default:
          {
               std::cout << "No match found" << std::endl;
          }
          break;
     }

     std::cout << "Moving on" << std::endl;

     /*
     // Condition can only be integer of enum (We'll learn about enums later in the course)
     std::string name {"John"};
     switch (name) // Compiler error!
     {

     }
     */

     return 0;
}