/*Մուտքագրել թիվ, տպել էկրանին թվի թվանշանների արտադրյալը։*/

#include <iostream>


int input_number() {
        int n;
        std::cout << "Enter your number: ";
        std::cin >> n;
        return n;
};

int mult_digits(int n) {
        int res = 1;
        while (n) {
                res *= n % 10;
                n = int(n/10);
        };
        return res;
};

int main() {
        int n = input_number();
        int res = mult_digits(n);
        std::cout << "Multiplication of digits is " << res << std::endl;
};
