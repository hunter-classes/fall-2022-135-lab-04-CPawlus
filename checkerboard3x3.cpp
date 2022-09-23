#include <iostream>
#include "checkerboard3x3.h"

std::string checkerboard3x3(int width, int height) 
{
   // Variables
   int shift = 1;
   int count = 0;
   int length = width;
   std::string space = "   ";
   std::string type = "*";
   std::string store = "";
   int rep;
   // Conditionals
   for(int r = 0; r < height/3; r++) 
   {  
      for(int j = 0; j < width; j++)
      {
         if((count == 3) && ((shift%2) == 1)) 
         {
            count = 0;
            type = " ";
            shift++;
         }
         else if((count == 3) && ((shift%2) == 0))
         {
            count = 0;
            type = "*";
            shift++;
         }
         std::cout << type;
         store = store + type;
         count++;
      } 
      length--;

      space = "";
      type = "";
      if(length > 1) 
      {
         rep = 2;
      }
      else 
      {
         rep = 1;
      }

      std::cout << std::endl;
      for(int a = 0; a < rep; a++) 
      {
         std::cout << store << std::endl;
      }
      
      store = "";
   }
    
   return "";
}