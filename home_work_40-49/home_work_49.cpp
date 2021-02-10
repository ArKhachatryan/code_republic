/*Գրել ֆունկցիա, որը վերադարձնում է թվի առաջին k թվանշանները։ Թիվն ու k-ն մուտքագրել։*/

#include <iostream>
#include <cmath>
using namespace std;


int get_number() {
        int n;
        cout << "Enter your number: ";
        cin >> n;
        return n;
}

int get_count() {
        int c;
        cout << "Enter count of digits: ";
        cin >> c;
        return c;
}

int length_num(int n) {
        int length = 1;
        while (n/=10) {
                length++;
        }
        return length;
}

double rem_frst_k_dgts(int num, int k) {
        int length = length_num(num);
        int op2 = pow(10, (length - k));
        double res = num % op2;
        return res;
}

int main() {
        int num = get_number();
        int cnt = get_count();
        cout << "The result is " << rem_frst_k_dgts(num, cnt) << endl;
}
