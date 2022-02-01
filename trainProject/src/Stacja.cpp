//
// Created by Lenovo on 01.02.2022.
//
#include "Stacja.h"

Stacja::Stacja() {
    cout << "Stacja utworzona" << endl;
}

Stacja::~Stacja() {
    cout << "Stacja usunieta" << endl;
}

void Stacja::dodajPociag(string numer, int peron, short godzina, short minuta, string status) {
    this->pociagi.push_back(new Drezyna(numer, peron, status, godzina, minuta));
}

void Stacja::dodajPociag(string numer, string relacja, int peron, short godzina, short minuta, string status) {
    this->pociagi.push_back(new Towarowy(numer, relacja, peron, status, godzina, minuta));
}

void Stacja::dodajPociag(string numer, string relacja, int peron, short g_przy, short m_przy,
                         short g_odj, short m_odj, string status) {
    this->pociagi.push_back(new Pasazerski(numer, relacja, peron, status, g_przy, m_przy,
     g_odj, m_odj));
}

int Stacja::znajdzPociag(string numer) {
    int i = 0;

    for(auto pociag : pociagi)
    {
        if(pociag->pobierzNumer() == numer)
            return i;
        i++;
    }
    return -1;
}

void Stacja::usunPociag(string numer) {
    int i = Stacja::znajdzPociag(numer);

    if (i == -1)
        cout << "Nie ma takiego pociagu" << endl;
    else
        pociagi.erase(pociagi.begin() + i);
}

void Stacja::edytujStatus(string numer, string nowyStatus) {
    int i = znajdzPociag(numer);

    if(i == -1)
        cout << "Nie ma takiego pociagu" << endl;
    else
        pociagi[i]->setStatus(nowyStatus);
}

void Stacja::znajdzPoNumerze(string numer) {
    int i = znajdzPociag(numer);

    if(i == -1)
        cout << "Nie ma takiego pociagu" << endl;
    else
        this->pociagi[i]->printTrain();
}

void Stacja::wyswietlPociagi() {
    for(auto p: pociagi){
        p->printTrain();
    }
}

void Stacja::pobierzPociagi() {
    ifstream input("../../trainProject/input.csv");

    if(input.is_open()){
        string linijka;

        while(getline(input, linijka)){
            stringstream str(linijka);
            string typ, numer, relacja, g_p, g_o, m_p, m_o, p, status;
            int peron;
            short g_przy, g_odj, m_przy, m_odj;

            getline(str, typ, ',');

            if(typ.compare("P") == 0)
            {
                getline(str, numer, ',');
                getline(str, relacja, ',');
                getline(str, g_p, ':');
                getline(str, m_p, ',');
                getline(str, g_o, ':');
                getline(str, m_o, ',');
                getline(str, p, ',');
                getline(str, status);

                g_przy = stoi(g_p, nullptr, 10);
                m_przy = stoi(m_p, nullptr, 10);
                g_odj = stoi(g_o, nullptr, 10);
                m_odj = stoi(m_o, nullptr, 10);
                peron = stoi(p, nullptr, 10);

                pociagi.push_back(new Pasazerski(numer, relacja, peron, status, g_przy, m_przy, g_odj, m_odj));
            }
            else if(typ.compare("T") == 0)
            {
                getline(str, numer, ',');
                getline(str, relacja, ',');
                getline(str, g_p, ':');
                getline(str, m_p, ',');
                getline(str, g_o, ':');
                getline(str, m_o, ',');
                getline(str, p, ',');
                getline(str, status);

                g_przy = stoi(g_p, nullptr, 10);
                m_przy = stoi(m_p, nullptr, 10);
                g_odj = stoi(g_o, nullptr, 10);
                m_odj = stoi(m_o, nullptr, 10);
                peron = stoi(p, nullptr, 10);

                pociagi.push_back(new Towarowy(numer, relacja, peron, status, g_przy, m_przy));
            }
            else if(typ.compare("D") == 0)
            {
                getline(str, numer, ',');
                getline(str, relacja, ',');
                getline(str, g_p, ':');
                getline(str, m_p, ',');
                getline(str, g_o, ':');
                getline(str, m_o, ',');
                getline(str, p, ',');
                getline(str, status);

                g_przy = stoi(g_p, nullptr, 10);
                m_przy = stoi(m_p, nullptr, 10);
                g_odj = stoi(g_o, nullptr, 10);
                m_odj = stoi(m_o, nullptr, 10);
                peron = stoi(p, nullptr, 10);

                pociagi.push_back(new Drezyna(numer, peron, status, g_przy, m_przy));
            }
            else
                exit(1);
        }
    }
    else{
            cout << "Nie moglem otworzyc pliku\n";
            exit(1);
    }
    input.close();
}