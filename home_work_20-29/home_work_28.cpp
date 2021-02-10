/*Տպել զանգվածի կենտ թվերի քանակը։*/

#include <iostream>
using namespace std;


void get_count_elements(int &n) {
        cout << "Enter count of numbers: ";
        cin >> n;
};

int* get_numbers(int length) {
        int *p = new int[length];
        cout << "Enter numbers" << endl;
        for (int i = 0; i < length; i++) {
                cin >> p[i];
        }
        return p;
};

void print_odds(int* arr, int length) {
        cout << "Filtered array by odds numbers: [";
        for (int i = 0; i < length; i++) {
                if ( arr[i] % 2 == 0 ) { continue; };
                cout << arr[i] << ",";
        }
        cout << "\b]" << endl;
};

int main() {
        int length;
        get_count_elements(length);
        int* p = get_numbers(length);
        print_odds(p, length);
};
