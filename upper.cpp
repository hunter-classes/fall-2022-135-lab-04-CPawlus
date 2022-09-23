#include <iostream>
#include "upper.h"

std::string upper(int length) 
{
   // Variables
   int c = length;
   int c_2 = 1;
   std::string space = "";
   // Conditionals
   for(int i = 0; i < length; i++) 
   {  
      std::cout << space;
      space = "";
      for(int j = c; j > 0; j--) 
      {
         std::cout << "*";
      }
      for(int i = 0; i < c_2; i++)
      {
         space = space + " ";
      }
      c--;
      if(c_2 == length) 
      {
         break;
      }
      else 
      {
         c_2++;
      }
      std::cout << "\n";
   }
   std::cout << "\n";
   
   return "";
}