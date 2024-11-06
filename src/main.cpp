/**
 * @file main.cpp
 * @brief Main file to demonstrate the functionality of the Vector class.
 * 
 * This file contains a test function to create and manipulate Vector objects, demonstrating 
 * vector addition, printing, and magnitude calculation.
 * 
 * @date 2024/11/6
 * @Author Han Li
 */

#include <iostream>
#include "Vector.h"

/**
 * @brief Test function that creates and manipulates Vector objects.
 * 
 * This function creates two Vector instances, prints their values, performs vector addition,
 * prints the result, and then calculates and prints the magnitude of the resulting vector.
 */
void test() {
    Vector v1(2, 4);
    Vector v2(3, 2);
    v1.print();
    v2.print();
    Vector v3 = v1.add(v2);
    v3.print();
    v3.dir();
}

/**
 * @brief Main function that calls the test function.
 * 
 * This is the entry point for the program, where the test function is called to demonstrate 
 * the capabilities of the Vector class.
 * 
 * @return int - Returns 0 upon successful execution.
 */
int main() {
    test();
    return 0;
}
