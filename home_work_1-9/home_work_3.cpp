/*Մուտքագրել թիվ, տպել թվի թվանշանների գումարը էկրանին։ 
Օրինակ՝ մուտքագրված 5479 թվի համար տպել 25 (որովհետև 5+4+7+9=25)։*/

#include <iostream>


int input_number() {
        int n;
        std::cout << "Enter your number: ";
        std::cin >> n;
        return n;
};

int sum_digits(int n) {
        int sum = 0;
        while (n) {
                sum += n%10;
                n = int(n/10);
        };
        return sum;
}
int main() {
        int n = input_number();
        std::cout << "Sum of digits is " << sum_digits(n) << "\n";
};
