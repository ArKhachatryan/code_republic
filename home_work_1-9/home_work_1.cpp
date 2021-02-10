/*Մուտքագրել թիվ, տպել թվի թվանշանները առանձին առանձին էկրանին։ 
Օրինակ՝ մուտքագրված 5479 թվի համար տպել ‘5’, ‘4’, ‘7’, ‘9’։*/

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
        while (reversed) {
                std::cout << reversed%10 << '\n';
                reversed = int(reversed/10);
        };
};
