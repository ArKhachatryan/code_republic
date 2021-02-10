/*Գրել ֆունկցիա, որը ստանում է թիվ և վերադարձնում թվում պարունակվող 1 բիտերի քանակը։*/

#include <iostream>
#include <string>
using namespace std;


int get_number() {
        int n;
        cout << "Enter decimal number: ";
        cin >> n;
        return n;
};

string from_dec_to_bin(int n) {
        string bin = "";
        while(n > 0) {
                bin += to_string(n % 2);
                n /=  2;
        }
        return bin;
};

int count_of_1(string bin) {
        int count = 0;
        for (int i = 0; i < bin.length(); i++) {
                if (bin[i] != '1') { continue; }
                count++;
        }
        return count;
};

int main() {
        int input = get_number();
        cout << "Count of 1 bits: ";
        cout << count_of_1(from_dec_to_bin(input));
        cout << endl;
};
