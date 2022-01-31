//
// Created by Lenovo on 31.01.2022.
//
#include "funkcje.h"

extern vector<vector<string>> content;

void menu()
{
    cout << "\t---------------------------------------\n";
    cout << "Witaj w programie do zarzadzania pociagami, co chcesz zrobic:\n";
    cout << "\t1.Wyswietl aktualny rozklad\n";
    cout << "\t2.Dodaj pociag\n";
    cout << "\t3.Usun pociag\n";
    cout << "\t4.Aktualizuj czas\n";
    cout << "\t5.Edytuj przejazd\n";
    cout << "\t6.Sprawdz status\n";
    cout << "\t8.Wyswietl dokumntacje\n";
    cout << "\t0.Wyjscie\n";
}

void pobierzRozklad(string fname)
{
   // vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file (fname, ios::in);

    if(file.is_open())
    {
        while(getline(file, line))
        {
            row.clear();
            stringstream str(line);

            while(getline(str, word, ','))
                row.push_back(word);

            content.push_back(row);
        }
    }
    else{
        cout << "Nie moglem otworzyc pliku\n";
        exit(1);
    }
}

void aktualnyCzas(czas_aktualny aktualny)
{
    if(aktualny.minuta < 10 && aktualny.godzina > 10)
        cout << setw(50) << "AKTUALNY CZAS: " << aktualny.godzina << ":0" << aktualny.minuta << endl;
    else if(aktualny.godzina < 10 && aktualny.minuta < 10)
        cout << setw(50) << "AKTUALNY CZAS: 0" << aktualny.godzina << ":0" << aktualny.minuta << endl;
    else if(aktualny.godzina < 10 && aktualny.minuta >= 10)
        cout << setw(50) << "AKTUALNY CZAS: 0" << aktualny.godzina << ":" << aktualny.minuta << endl;
    else
        cout << setw(50) << "AKTUALNY CZAS: " << aktualny.godzina << ":" << aktualny.minuta << endl;
}

void rozklad(czas_aktualny aktualny)
{
    aktualnyCzas(aktualny);

    for(int i = 0; i < content.size(); i++){
        for(int j = 0; j < content[i].size(); j++)
            cout << setw(10) <<  content[i][j] << "\t";
        cout << endl;
    }
}

void aktualizujCzas(czas_aktualny *akt){
    akt->minuta += 5;
    if(akt->minuta == 60)
    {
        akt->minuta = 0;
        akt->godzina += 1;
        if(akt->godzina == 24)
            akt->godzina = 0;
    }
}