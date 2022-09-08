/*
Author : Justin Wong 
CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2B

Compiled with funcs.cpp to print all integers from two user input integers
*/
#include "funcs.h"
#include <iostream>
int main()
{
    int L;
    int U;
    std::cout << "Please enter L: ";
    std::cin >> L;
    std::cout << "Please enter U: ";
    std::cin >> U;
    print_interval(L, U);
}