/*Իրականացնել ֆակտորիալի հաշվարկումը ռեկուրսիվ եղանակով։*/

#include <iostream>
using namespace std;


int factorial(int n) {
        if ( n == 1 ) { return 1; };
        return n * factorial(n - 1);
}

int main() {
        int num;
        cout << "Enter your number: ";
        cin >> num;
        cout << "Factorial of " << num << " equal to " << factorial(num) << endl;
}
