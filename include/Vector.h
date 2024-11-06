/**
 * @file Vector.h
 * @brief Header file for the Vector class.
 * 
 * This header file defines the Vector class, representing a 2D vector with basic vector operations 
 * such as addition, printing, and magnitude calculation. The Vector class provides methods to 
 * initialize, manipulate, and display 2D vectors.
 * 
 * @date 2024/11/6
 * @author Han Li
 */

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
    double x; ///< The x-coordinate of the vector.
    double y; ///< The y-coordinate of the vector.

public:
    /**
     * @brief Constructor that initializes the Vector with x and y coordinates.
     * 
     * This constructor allows the creation of a Vector object with specified x and y coordinates,
     * representing the vector in 2D space.
     * 
     * @param x The x-coordinate of the vector.
     * @param y The y-coordinate of the vector.
     */
    Vector(double x, double y);

    /**
     * @brief Adds this vector to another vector and returns the result.
     * 
     * This function performs vector addition, combining the x and y coordinates of this vector
     * with the x and y coordinates of another specified vector. It returns a new Vector instance 
     * that represents the resulting vector.
     * 
     * @param other A reference to another Vector object to add to this vector.
     * @return A new Vector object that is the sum of this vector and the other vector.
     */
    Vector add(Vector &other);

    /**
     * @brief Prints the vector in a human-readable format.
     * 
     * This function outputs the vector's coordinates in the format "Vector(x, y)" to the console.
     */
    void print();

    /**
     * @brief Calculates and prints the magnitude of the vector.
     * 
     * This function calculates the magnitude (length) of the vector using the formula 
     * \f$ \sqrt{x^2 + y^2} \f$ and outputs it to the console in a readable format.
     */
    void dir();

    /**
     * @brief Destructor for the Vector class.
     * 
     * Cleans up any resources used by the Vector object before it is destroyed.
     */
    ~Vector();
};

#endif // VECTOR_H
