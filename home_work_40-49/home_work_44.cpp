/*Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա ռեկուրսիվ տարբերակով։*/

#include <iostream>
using namespace std;


enum { frst_num_fib, scnd_num_fib };

int fib(int a, int b, int n) {
        if (n==1) {
                return a;
        }
        return fib(b, a + b, n - 1);
}

int main() {
        int n;
        cout << "Enter index of Fibonacci sequence: ";
        cin >> n;
        cout << "The " << n <<"th number of sequence is " << fib(frst_num_fib, scnd_num_fib, n) << endl;
}
