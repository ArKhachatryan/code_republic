/*Մուտքագրել թիվ, փոխակերպել թիվը տասնվեցական համակարգի թվի և տպել արդյունքը։*/

#include <iostream>
#include <string>
using namespace std;


int get_number() {
        int n;
        cout << "Enter decimal number: ";
        cin >> n;
        return n;
};

string get_hex_dig(int d) {
        string res; 
        switch(d) {
                case 10:
                          return "A";
                case 11:
                          return "B";
                case 12:
                          return "C";
                case 13:
                          return "D";
                case 14:
                          return "E";
                case 15:
                          return "F";
                default:
                          return to_string(d);
        }
}

void print_reversed_str(string str) {
        int length = str.length();
                for(int i = 0; i < length; i++) {
                        cout << str[length - i - 1];
                }
}

string from_binary_to_hex(int n) {
        int d;
        string hex = "";
        while(n > 0) {
                d = n % 16;
                n /=  16;
                hex += get_hex_dig(d);
        }
        return hex;
}

int main() {
        int input = get_number();
        cout << "Hex number: "; 
        print_reversed_str(from_binary_to_hex(input));
        cout << endl;
}
