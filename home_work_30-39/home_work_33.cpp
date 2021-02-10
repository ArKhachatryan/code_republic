/*Գրել ֆունկցիա, որը ստանում է թիվ և վերադարձնում true, եթե թիվը պարզ է։*/

#include <iostream>
#include <cmath>
using namespace std;


bool is_prime(int n) {
        int root = sqrt(n);
        for (int i = 2; i < n; i++) {
                if (n % i == 0) { return false; }
        }
        return true;
}

int main() {
        is_prime(17) ? cout << "true" : cout << "false";
}
