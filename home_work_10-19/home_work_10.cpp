/*Մուտքագրել թիվ, որը ներկայացնում է հեռավորությունը՝ չափված մետրերով։ 
Վերածել և տպել արժեքը կիլոմետրերով։ Օրինակ՝ մուտքագրված 1400 թվի դեպքում տպել “1.4 km”։*/

#include <iostream>
using namespace std;


double convert_from_m_to_km(double distance) {
        return distance / 1000;
};


int main() {
        int distance;
        cout << "Enter the distance: ";
        cin >> distance;
        cout << "Distance is " << convert_from_m_to_km(distance) << " km" << endl;
}
