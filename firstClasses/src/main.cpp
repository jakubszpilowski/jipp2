//
// Created by Lenovo on 25.10.2021.
//
#include "FirstClass.h"

int main(){
    FirstClass person("Jan", "Nowak", 43, 182);

    person.printAllData();
    person.setTall(185);

    person.printAllData();
    cout << person.getFootSize() << endl;

    return 0;
}
