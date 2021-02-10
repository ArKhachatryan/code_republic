/*Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա իտերատիվ տարբերակով։*/

#include <iostream>
using namespace std;


enum { frst_num_fib, scnd_num_fib };

int fib(int n) {
        int a = 0;
        int b = 1;
        int tmp;
        for (int i = 0; i < n; i++) {
                tmp = b;
                b = a + b;
                a = tmp;
        }
        return a;
}

int main() {
        int n;
        cout << "Enter index of Fibonacci sequence: ";
        cin >> n;
        cout << "The " << n <<"th number of sequence is " << fib(n) << endl;
}
