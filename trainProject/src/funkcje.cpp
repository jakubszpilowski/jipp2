//
// Created by Lenovo on 31.01.2022.
//
#include "funkcje.h"

void menu()
{
    cout << "\t---------------------------------------\n";
    cout << "Witaj w programie do zarzadzania pociagami, co chcesz zrobic:\n";
    cout << "\t1.Wyswietl aktualny rozklad\n";
    cout << "\t2.Dodaj pociag\n";
    cout << "\t3.Usun pociag\n";
    cout << "\t4.Edytuj status\n";
    cout << "\t5.Znajdz pociag\n";
    cout << "\t6.Wyswietl dokumentacje\n";
    cout << "\t0.Wyjscie\n";
    cout << "\t--------------------------------------\n";
}

void dokumentacja(){
    cout << "XD" << endl;
}

void dodajPociag(Stacja* s){
    string numer, relacja, status;
    short g_przy, g_odj, m_przy, m_odj;
    int peron;
    char a;

    cout << "Dodawanie pociagu\nWybierz typ: (P)asazerski, (T)owarowy, (D)rezyna\n"
            "lub (W)yjscie" << endl;

    cin >> a;

    while(a != 68 && a != 80 && a != 84 && a != 87)
    {
        cout << "Podano zly argument\nWybierz ponownie: (P)asazerski, (T)owarowy, (D)rezyna lub (W)yjscie \n";
        cin.clear();
        cin.ignore();
        cin >> a;
    }

    if(a == 'W')
        return;
    else if(a == 'P'){
        cout << "Podaj:\nNumer: ";
        cin >> numer;
        cout << "Peron: ";
        cin >> peron;
        cout << "Relacje: ";
        cin.ignore();
        getline(cin, relacja);
        cout << "Czas przyjazdu (godzina i minuty oddzielone spacja): ";
        cin >> g_przy >> m_przy;

        if((g_przy > 23 || g_przy < 0) && (m_przy < 0 || m_przy > 60))
        {
            cout << "Nieprawidlowe dane, godznia przyjazdu ustawiona domyslnie na 00:00\n";
            g_przy = m_przy = 0;
        }

        cout << "Czas odjazdu (godzina i minuty oddzielone spacja): ";
        cin >> g_odj >> m_odj;

        if((g_odj > 23 || g_odj < 0) && (m_odj < 0 || m_odj > 60))
        {
            cout << "Nieprawidlowe dane, godznia odjazdu ustawiona domyslnie na 00:00\n";
            g_odj = m_odj = 0;
        }

        cout << "Status: ";
        cin.ignore();
        getline(cin, status);

        s->dodajPociag(numer, relacja, peron, g_przy, m_przy, g_odj, m_odj, status);
    }
    else if(a == 'T'){
        cout << "Podaj:\nNumer: ";
        cin >> numer;
        cout << "Peron: ";
        cin >> peron;
        cout << "Relacje: ";
        cin.ignore();
        getline(cin, relacja);
        cout << "Czas przejazdu (godzina i minuty oddzielone spacja): ";
        cin >> g_przy >> m_przy;

        if((g_przy > 23 || g_przy < 0) && (m_przy < 0 || m_przy > 60))
        {
            cout << "Nieprawidlowe dane, godznia przejazdu ustawiona domyslnie na 00:00\n";
            g_przy = m_przy = 0;
        }

        cout << "Status: ";
        cin.ignore();
        getline(cin, status);

        s->dodajPociag(numer, relacja, peron, g_przy, m_przy, status);
    }
    else{
        cout << "Podaj:\nNumer: ";
        cin >> numer;
        cout << "Peron: ";
        cin >> peron;
        cout << "Czas przejazdu (godzina i minuty oddzielone spacja): ";
        cin >> g_przy >> m_przy;

        if((g_przy > 23 || g_przy < 0) && (m_przy < 0 || m_przy > 60))
        {
            cout << "Nieprawidlowe dane, godznia przejazdu ustawiona domyslnie na 00:00\n";
            g_przy = m_przy = 0;
        }

        cout << "Status: ";
        cin.ignore();
        getline(cin, status);

        s->dodajPociag(numer, peron, g_przy, m_przy, status);
    }

    cout << "Do rozkaldu pomyslnie dodano pociag" << endl;
}