#include <iostream>
#include "lower.h"

std::string lower(int length) 
{
   // Variable
   int c = 1;
   // Conditionals
   for(int i = 0; i < length; i++) 
   {  
      for(int j = 0; j < c; j++) 
      {
         std::cout << "*";
      }
      c++;
      std::cout << "\n";
   }
   
   return "";
}