/*
Author : Justin Wong 
CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2D

Prints up to the 60th number in the fibonacci sequence

As the numbers in the fibonacci array approach 2billion, the numbers bug out and start producing random
integers. This is because once the array reaches to just a little below 2 billion, it realizes that the
next number in the sequence would surpass the max integer value of C++ which is 2147483647. 
*/
#include <iostream>
int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 61; i++)
    {
        fib[i]= fib[i-1] + fib[i-2];
    }
    for(int i = 0; i < 60; i++)
    {
        std::cout << fib[i] << "\n";
    }
}