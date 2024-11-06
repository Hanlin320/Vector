/**
 * @file Vector.cpp
 * @brief Implementation of the Vector class methods.
 * 
 * This source file implements the methods of the Vector class, including initialization, 
 * vector addition, printing, and magnitude calculation.
 * 
 * @date 2024/11/6
 * @Author Han Li
 */

#include <iostream>
#include <cmath>
#include "Vector.h"


Vector::Vector(double x, double y) : x(x), y(y) {}

Vector Vector::add(Vector &other) {
    return Vector(this->x + other.x, this->y + other.y);
}


void Vector::print() {
    std::cout << "Vector(" << this->x << ", " << this->y << ")" << std::endl;
}


void Vector::dir() {
    double magnitude = std::sqrt(this->x * this->x + this->y * this->y);
    std::cout << "The magnitude of Vector(" << this->x << ", " << this->y << ") is " << magnitude << std::endl;
}

Vector::~Vector() {}
