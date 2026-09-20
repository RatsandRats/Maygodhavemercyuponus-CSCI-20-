#include<iostream>

int main(){

    // Booleans provide one of two outputs that we denote as true, yes, 1 and false, no, 0

    // For this example we will use "a" to be our true output
    bool a = true;
    
    // And we will use "b" to be our false output
    bool b = false;
    // bool is the instruction to the compiler that we will be using boolean commands in these statements

    std::cout << "a is " << a << std::endl;

    std::cout << "b is " << b << std::endl;
    // std::cout prints the output to the console
    // << is an operator called "insertion operator" and tells the compiler to read the statements how we read english text
    // "a is " and  "b is " are labels that are to be printed right before the values of the variable a and b respectively
    // without "a is " and "b is ", our output would just be the values of both variables.
    // std::endl tell the compiler to end the sentence and start the next one below. Without it the output would be one run on sentence

    // AND functions are denoted by &&
    // OR functions are denoted by ||
    // NOT functions are denoted by !

    // NAND and NOR commands aren't natively used in C++ but we can combine the previous commands to make NAND and NOR commands

    return 0;
    // no c++ program will run without the return 0 command
}