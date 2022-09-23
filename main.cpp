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
#include "trapezoid.h"
#include "checkerboard3x3.h"

int main() 
{
   // A
   std::cout << "Input width: 7\nInput height: 4\n";
   std::cout << "\nShape:\n";
   box(7,4);
   std::cout << "\n------------------\n";
   // B
   std::cout << "Input width: 11\nInput height: 6\n";
   std::cout << "\nShape:\n";
   checkerboard(11,6);
   std::cout << "\n------------------\n";
   // C
   std::cout << "Input size: 8\n";
   std::cout << "\nShape:\n";
   cross(8);
   std::cout << "\n------------------\n";
   // cross(9); works with odd sizes
   // D
   std::cout << "Input side length: 6\n";
   std::cout << "\nShape:\n";
   lower(6);
   std::cout << "\n------------------\n";
   // E
   std::cout << "Input side length: 5\n";
   std::cout << "\nShape:\n";
   upper(5);
   std::cout << "\n------------------\n";
   // F
   std::cout << "Input width: 12\nInput height: 5\n";
   std::cout << "\nShape:\n";
   trapezoid(12,5);
   std::cout << "\n------------------\n";
   // G
   std::cout << "Input width: 27\nInput height: 27\n";
   std::cout << "\nShape:\n";
   checkerboard3x3(27,27);
   std::cout << "\n------------------\n";

   return 0;
}

