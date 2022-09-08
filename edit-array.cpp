/*
Author : Justin Wong 
CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2C

Makes and prints an array of 10 ones. Then constantly takes an index and a number and changes the 
array based on the inputs. If the index is out of range of the array, the program stops. 
*/
#include <iostream>
int main(){
    int myData[10];
    int index;
    int num;
    for(int i = 0; i<=9; i++)
    {
        myData[i] = 1;
    }
    do
    {
        for(int i = 0; i<=9; i++)
        {
            std::cout << myData[i] << " ";
        }
        std::cout << "\nInput Index: ";
        std::cin >> index;
        std::cout << "Input Value: ";
        std::cin >> num;

        myData[index] = num;

    }
    while(index >= 0 && index <= 9);
    std::cout << "Index out of range. Exit.\n";
    return 0;

}