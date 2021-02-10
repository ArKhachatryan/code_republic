/*Իրականացնել ֆակտորիալի հաշվարկումը իտերատիվ եղանակով։*/

#include <iostream>
using namespace std;


int factorial(int n) {
        int res = 1;
        while (n > 0) {
                res *= n;
                n--;
        }
        return res;
}

int main() {
        int num;
        cout << "Enter your number: ";
        cin >> num;
        cout << "Factorial of " << num << " equal to " << factorial(num) << endl;
}
