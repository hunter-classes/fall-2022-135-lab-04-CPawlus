#include <iostream>
#include "checkerboard.h"

std::string checkerboard(int width, int height)
{
   // Variables
   int val_h = width;
   int val_w = height;
   std::string space = "";
   // Conditionals
   if((val_w%2) == 1) 
   {
      val_w++;
   }
   for(int r = 0; r < val_w; r++)  
   {
      std::cout << space;
      for(int c = 0; c <= val_h/2; c++) 
      {
         std::cout << "* ";
      }
      std::cout << "\n";
      if((val_w%2) == 0) 
      {
         space = " ";
         val_w++;
         val_h = val_h - 2;
      }
      else 
      {
         space = "";
         val_w--;
         val_h = val_h + 2;
      }
   }

   return "";
}

