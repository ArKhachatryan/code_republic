/*Մուտքագրել թիվ, տպել թվի թվանշանների առավելագույն և նվազագույն արժեքները։*/

#include <iostream>
using namespace std;

int get_number() {
        int res;
        cin >> res;
        return res;
}

int max_digit(int n) {
        int max = 0;
        int dig;
        while(n > 0) {
                dig = n % 10;
                if (dig > max) {
                    max = dig;
                }
                n /= 10;
        }
        return max;
}

int min_digit(int n) {
        int min = 9;
        int dig;
        while(n > 0) {
                dig = n % 10;
                if (dig < min) {
                    min = dig;
                }
                n /= 10;
        }
        return min;
}

int main() {
        cout << "Enter your number: ";
        int input = get_number();
        cout << "Maximum digit is " << max_digit(input) << endl;
        cout << "Minimum digit is " << min_digit(input) << endl; 
};














