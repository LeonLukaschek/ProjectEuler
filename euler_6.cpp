/*
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
(https://projecteuler.net/problem=6)
*/

#include <iostream>
//including cmath for the pow(a, b) function
#include <cmath>

int main(int argc, char **argv){
    //Variables needed for the calculations
    int sumOfSquares = 0, squareOfSum = 0, counter = 0, difference = 0;
    //Getting the sum of squares using a for loop
    for(int i = 1; i <= 100; i++){
        sumOfSquares += pow(i, 2);
    }
    //Getting the sum of the first 100 natural numbers using a for loop, getting the square of the sum at the last iteration
    for(int i = 1; i <= 100; i++){
        counter += i;

        if(i == 100){
            squareOfSum = pow(counter, 2);
        }
    }

    //calculating the difference
    difference = squareOfSum - sumOfSquares;

    std::cout << "Sum of squares:    "<< sumOfSquares << std::endl;
    std::cout << "Square of the sum: " << squareOfSum << std::endl;
    std::cout << "Difference:        " << difference << std::endl;

    return 0;
}
