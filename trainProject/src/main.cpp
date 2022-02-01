//
// Created by Lenovo on 31.01.2022.
//
#include "funkcje.h"
#include "Train.h"
#include "Stacja.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2)
    {
        cout << "Nieprawidlowe dane wejsciowe, skorzystaj z [pomocy]\n" << endl;
        system("PAUSE");
        dokumentacja();
    }
    else{
        if(strcmp(argv[1], "start") == 0)
        {
            Stacja stacja;
            stacja.pobierzPociagi();
            int op;

            do{
                menu();
                if(!(cin >> op)){
                    cout << "Nieprawidlowa opcja" << endl;
                    exit(1);
                }

                switch (op) {
                    case 0:
                        cout << "Program konczy dzialanie" << endl;
                        break;

                    case 1:
                        stacja.wyswietlPociagi();
                        break;

                    case 2:
                    {
                        dodajPociag(&stacja);
                        break;
                    }

                    case 3:
                    {
                        string numer;
                        cout << "Usuwanie pociagu\nPodaj numer pociagu: ";
                        if(!(cin >> numer))
                        {
                            cout << "Nieprawidlowe dane" << endl;
                            exit(1);
                        }
                        stacja.usunPociag(numer);
                        break;
                    }

                    case 4:
                    {
                        string numer, status;
                        cout << "Edycja statusu pociagu\nPodaj\nNumer: ";
                        if(!(cin >> numer))
                        {
                            cout << "Nieprawidlowe dane " << endl;
                            exit(1);
                        }
                        cout << "Nowy status: ";
                        cin.ignore();
                        getline(cin, status);
                        stacja.edytujStatus(numer, status);
                        break;
                    }

                    case 5:
                    {
                        string numer;
                        cout << "Wyszukiwanie pociagu po numerze\nPodaj numer pociagu ktory chcesz znalezc\n";
                        cin.ignore();
                        getline(cin, numer);
                        stacja.znajdzPoNumerze(numer);
                        break;
                    }

                    case 6:
                        dokumentacja();
                        break;

                    default:
                        cout << "Nie ma takiej opcji, przyczytaj dokumantacje\n";
                        dokumentacja();
                        break;
                }
                system("PAUSE");
                system("CLS");
            }while(op != 0);
        }
        else
            dokumentacja();
    }

    cout << "Do zobaczenia" << endl;
    return 0;
}