/*Մուտքագրել թիվ, փոխակերպել թիվը երկուական համակարգի թվի և տպել արդյունքը։*/

#include <iostream>
#include <string>
using namespace std;


int get_number() {
        int n;
        cout << "Enter decimal number: ";
        cin >> n;
        return n;
};

void print_reversed_str(string str) {
        int length = str.length();
                for(int i = 0; i < length; i++) {
                        cout << str[length - i - 1];
                }
};

string from_dec_to_bin(int n) {
        string bin = "";
        while(n > 0) {
                bin += to_string(n % 2);
                n /=  2;
        }
        return bin;
};

int main() {
        int input = get_number();
        cout << "Binary number: ";
        print_reversed_str(from_dec_to_bin(input));
        cout << endl;
};
