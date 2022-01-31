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
    czas_aktualny aktualny;
    aktualny.godzina = 8;
    aktualny.minuta = 55;

    string name = "../../trainProject/";
    name.append(argv[1]);
    pobierzRozklad(name);

    do{
        menu();
        cin >> op;
    }while(op != 0);




    rozklad(aktualny);

    aktualizujCzas(&aktualny);
    rozklad(aktualny);

    cout << "Koniec programu " << endl;

   return 0;
}