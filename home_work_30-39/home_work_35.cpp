/*Ստեղծել երկու Student օբյեկտներ, մուտքագրել արժեքները ըստ նախորդ 
խնդրի։ Տպել այն ուսանողի անունը, ով մեծ է տարիքով։*/

#include <iostream>
using namespace std;


struct student {
        string name, surname, subject;
        int age;
        student(string a_name, string a_surname, string a_subject, int a_age) {
                name = a_name;
                surname = a_surname;
                subject = a_subject;
                age = a_age;
        }
};

int main() {
        student s1("Arman", "Khachatryan", "C++", 26);
        student s2("Daron", "Malakian", "Guitar", 54);
        s1.age > s2.age ? cout << s1.age : cout << s2.age << endl;
}
