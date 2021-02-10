/*Ստեղծել Student ստրուկտուրա, որը պարունակում է անուն, ազգանուն, տարիք, 
առարկաների անվանումներ։ Ստեղծել ստրուկտուրայի օբյեկը, մուտքագրել անդամների արժեքները։*/

#include <iostream>
using namespace std;


struct student {
        string name, surname, subject;
        int age;
};

int main() {
        student s1;
        s1.name = "Arman";
        s1.surname = "Khachatryan";
        s1.subject = "C++";
        s1.age = 26;
}
