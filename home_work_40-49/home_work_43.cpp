/*Նախորդ խնդրի ֆունկցիան իրականացնել իտերատիվ տարբերակով։*/

#include <iostream>
using namespace std;


void print_from_num_to_0(int n) {
        for (int i = n; i > -1; i--) {
                cout << i << ", ";
        }
}

int main() {
        int num;
        cout << "Enter your number: ";
        cin >> num;
        print_from_num_to_0(num);
        cout << endl;
}
