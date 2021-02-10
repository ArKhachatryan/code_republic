/*Տրված նախադասության համար դուրս բերել և տպել բոլոր թվերը։*/

#include <iostream>
using namespace std;


string str = "Abckjdsaf15fjjsaf19jaslkf2096jkldsaf74jjk7j4";

void filter_numbers(string str) {
        int code;
        for (int i = 0; i < str.length(); i++) {
                code = (int)str[i];
                if ( code < 48 || code > 57  ) {
                        continue;
                }
                cout << str[i];
        }
}

int main() {
        filter_numbers(str);
}
