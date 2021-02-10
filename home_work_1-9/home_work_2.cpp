/*Մուտքագրել թիվ, տպել թվի թվանշանները հակառակ հերթականությամբ։*/

#include <iostream>


int input_number() {
        int n;
        std::cout << "Enter your number: ";
        std::cin >> n;
        return n;
};

int reverse_number(int n) {
        int reversed = 0;
        while (n) {
                reversed = reversed * 10 + n % 10;
                n = int(n/10);
        };
        return reversed;
};

int main() {
        int n = input_number();
        int reversed = reverse_number(n);
        std::cout << "Your reversed number is " << reversed << '\n';
};
