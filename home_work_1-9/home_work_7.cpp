/*Մուտքագրել օգտագործողի անունը և հեռացնել բոլոր ձայնավորները։ Արդյունքը տպել էկրանին։*/

#include <iostream>
using namespace std;


string input_name() {
        string name;
        cout << "Enter your name: ";
        getline(cin, name);
        return name;
};

bool is_vowel(char c) {
        int count = 10;
        char vowels[count] = {  'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        while(count) {
                if (c==vowels[count - 1]) {
                        return true;
                }
                count--;
        }
        return false;
}


int main() {
        int n = 0;
        string name = input_name();
        while(name.length() != n ) {
                if (!is_vowel(name[n])) {
                        cout << name[n];
                }
                n++;
        }
        cout << endl;
}
