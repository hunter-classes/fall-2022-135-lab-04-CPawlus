#include <iostream>
#include "box.h"

std::string box(int width, int height) 
{
   // Conditionals
   for(int r = 0; r < height; r++) 
   {
      for(int c = 0; c < width; c++) 
      {
         std::cout << "*";
      }
      std::cout << "\n";
   }

   return "";
}