/*
Author : Justin Wong 
CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2A

Input an integer between 0 and 100 and print the square of it. If the integer isn't between 0 and 100,
requests and integer repeatedly until it satisfies the parameter. 
*/
#include<iostream>

int main(){
    int num;
    int square;
    std::cout << "Please enter an integer: ";
    std::cin >> num;
    if(num < 0 || num > 100)
    {
        do
        {
            std::cout << "Please re-enter: ";
            std::cin >> num;
        }
        while(num < 0 || num > 100);
    }
    square = num * num;
    std::cout << square << "\n";
    return 0;
}
