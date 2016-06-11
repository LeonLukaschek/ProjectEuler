#include <iostream>

int main(){
    int term_1 = 1, term_2 = 2, sum = 0;

    for(int i = 0; i < 10; i++){
        std:: cout << ", " << term_1 << ", " << term_2;
        sum = term_1 + term_2;
        term_1 = sum;
    }

    return 0;
}
