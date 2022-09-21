#include <iostream>
#include "cross.h"

std::string cross(int size) 
{
   // Initialization for Top to Middle Conditionals
   std::string space = "";
   for(int i = 0; i < size-2; i++) 
   {
      space = space + " ";
   }
   // Variables
   std::string space_in = space;
   std::string space_out = "";
   std::string space_2 = "";
   space = "";
   int temp = size-2;
   int temp_2 = 0;
   // Top to Middle Conditionals
   for(int c = 1; c <= size/2; c++) 
   {  
      for(int i = 0; i < temp-2; i++) 
      {
         space = space + " ";
      }
      std::cout << space_out << "*" << space_in;
      std::cout << "*" << space_out << "\n";
      space_out = space_out + " ";
      space_in = space;
      space = "";
      temp = temp - 2;
   }
   // Variable reset
   temp = 0;
   space = ""; 
   space_2 = "";
   temp_2 = space_out.length();
   space_out = "";
   // Initialization for Middle to Bottom Conditionals
   for(int j = temp_2-2; j >= 0; j--) 
   {
      space_2 = space_2 + " ";
   }
   space_out = space_2;  
   // Determines how make the shape if its odd or even size 
   // temp-1 and temp works for even, temp and temp teamp+1 works for odd
   if(size%2 == 0) 
   {
      temp = 0;
   }
   else 
   {
      temp = 1;
   }
   // Initialization for Middle to Bottom Conditionals
   for(int i = -1; i < temp-1; i++) 
   {
      space = space + " ";
   } 
   space_in = space;
   // Middle to Bottom Conditionals
   for(int c = 1; c <= size/2; c++) 
   {  
      space = "";
      space_2 = "";
      if(temp >= size) 
      {
         break;
      }
      for(int i = -2; i < temp; i++) 
      {
         space = space + " ";
      }  
      for(int j = temp_2-2; j > 0; j--) 
      {
         space_2 = space_2 + " ";
      }
      std::cout << space_out << "*" << space_in;
      std::cout << "*" << space_out << "\n";
      space_out = space_2;
      space_in = space;
      space = "";
      space_2 = "";
      temp = temp + 2;
      temp_2 = temp_2 - 1;
   }
   
   return "";
}