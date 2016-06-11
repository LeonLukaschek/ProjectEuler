/*

Problem: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
(https://projecteuler.net/problem=1)
*/
#include <iostream>


int main(){

    int numsToSearch, multiples = 0;

    std::cin >> numsToSearch;

    for(int i = 0; i < numsToSearch; i++){
        if(i % 5 == 0 || i % 3 == 0){
            multiples += i;
            std::cout << i << std::endl;
        }
    }

    std::cout << multiples << std::endl;

	return 0;
}
