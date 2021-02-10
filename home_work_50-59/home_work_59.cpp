#include <iostream>
using namespace std;


int main() {
        FILE* from;
        FILE* to;
        char c;
        bool is_space = false;
        from = fopen("./home_work_50.cpp", "r");
        to = fopen("./output.txt", "w");
        while ((c = fgetc(from)) != EOF) {
                if (is_space) {
                        fputc(c, to);
                }
                is_space = (c == ' ');
                if (c == ' ') {
                        is_space = true;
                } else {
                        is_space = false;
                }
        }
}
