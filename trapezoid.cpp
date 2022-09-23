#include <iostream>
#include "trapezoid.h"

std::string trapezoid(int width, int height)
{
   // Pre-condition
   double w = width;
   double h = height;
   if(w/h < 2.0) 
   {
      std::cout << "Impossible shape!\n";
      return "";
   }
   // Variables
   std::string space = "";
   int temp = width;
   int temp_2 = 0;
   // Conditionals
   for(int r = 0; r < height; r++) 
   {
      for(int c = 0; c < temp_2; c++) 
      {
         space = space + " ";
      }
      std::cout << space;
      for(int i = 0; i < temp; i++) 
      {
         std::cout << "*";
      }
      std::cout << space;
      std::cout << "\n";
      space = "";
      temp = temp - 2;
      temp_2 = temp_2 + 1;
   }

   return "";
}