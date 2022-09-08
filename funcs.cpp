/*
Author : Justin Wong 
CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2B

Function that is run in main.cpp that takes two integers and prints all the integers between them, 
excluding the int U.
*/
#include "funcs.h"
#include <iostream>
void print_interval(int L, int U)
{
    for(int i = L; i < U; i++)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}