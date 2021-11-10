//
// Created by Lenovo on 08.11.2021.
//
#include "Pojazd.h"
using namespace std;

int main(){
    Pojazd p1(124, "Samochod", 3, "Ford", "Fiesta");
    p1.setInfo(0, "Piotr");
    p1.setInfo(1, "Jan");
    p1.setInfo(2, "Michal");
    p1.printInfo();

    Pojazd p2 = p1;
    p2.setName("Samochod");
    p2.setNumber(1456);
    p2.setInfo(0, "Szymon");
    p2.setInfo(1, "Adam");
    p2.setInfo(2, "puste");
    p2.printInfo();

    return 0;
}
