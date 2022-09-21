/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Printing Shapes, main.cpp, Lab 4.

This program uses certain files to print out certain shapes using 
different functions.
*/

#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid"

int main () 
{
   // A
   std::cout << "Shape:\n";
   box(7,4);
   std::cout << "\n------------------\n";
   // B
   std::cout << "Shape:\n";
   checkerboard(11,6);
   std::cout << "\n------------------\n";
   // C
   std::cout << "Shape:\n";
   cross(8);
   std::cout << "\n------------------\n";
   // cross(9); works with odd sizes
   // D
   std::cout << "Shape:\n";
   lower(6);
   std::cout << "\n------------------\n";
   // E
   std::cout << "Shape:\n";
   upper(5);
   std::cout << "\n------------------\n";
   // F
   std::cout << "Shape:\n";
   std::cout << "\n------------------\n";
   // G
   std::cout << "Shape:\n";
   std::cout << "\n------------------\n";

   return 0;
}

