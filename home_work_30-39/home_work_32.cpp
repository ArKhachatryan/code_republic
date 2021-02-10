/*Մուտքագրել տող։ Տպել տողում իրար հաջորդող նույնարժեք սիմվոլների ամենաերկար շարքը։*/

#include <iostream>
using namespace std;


string get_string() {
        string str;
        cout << "Enter your string: ";
        cin >> str;
        return str + '\0';
}

int print_max_line(string str) {
        int max_line_length = 0;
        int curr_count = 1;
        char max_frq_symbol;
        for (int i = 1; i < str.length(); i++) {
                if (str[i] == str[i - 1]) {
                        curr_count++;
                } else {
                        if (curr_count > max_line_length) {
                                max_frq_symbol = str[i - 1];
                                max_line_length = curr_count;
                        }
                        curr_count = 1;
                }
        }
        while (max_line_length) {
                cout << max_frq_symbol;
                max_line_length--;
        }
        cout << endl;
}

int main() {
        string input = get_string();
        print_max_line(input);
}
