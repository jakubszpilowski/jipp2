//
// Created by Lenovo on 31.01.2022.
//
#include <iostream>
#include <vector>
#include "funkcje.h"
#include "Train.h"

using namespace std;

vector<vector<string>> content;

int main(int argc, char* argv[]){
    int op;
    struct czas aktualny_czas;
    aktualny_czas.godzina = 8;
    aktualny_czas.minuta = 55;

    do{
        menu();
        cin >> op;
    }while(op != 0);

    string name = "../../trainProject/";
    name.append(argv[1]);

    pobierzRozklad(name);
    rozklad(aktualny_czas);

    aktualizujCzas(&aktualny_czas);
    rozklad(aktualny_czas);

    cout << "Koniec programu " << endl;

   return 0;
}