//
// Created by Lenovo on 31.01.2022.
//
#include "funkcje.h"

void menu()
{
    cout << "\t---------------------------------------\n";
    cout << "Program to zarzadzania pociagami, co chcesz zrobic: \n";
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
    system("CLS");
    int op;

    do{
        cout << "\t-----------------------------\n";
        cout << "Witaj w dokumentacji do programu:\nWybierz odpowiedni numer aby dowiedziec sie wiecej:\n";
        cout << "\t1.Uruchomienie progamu\n\t2.Wyswietlanie rozkladu\n\t3.Dodawanie i usuwanie pociagow\n";
        cout << "\t4.Edycja statusu\n\t5.Wyszukiwanie\n\t6.Wyjscie\n";
        cout << "\t-----------------------------\n";
        if(!(cin >> op)){
            cout << "Nieprawidlowa opcja" << endl;
            exit(1);
        }

        switch (op) {
            case 1:
                system("CLS");
                cout << "*Uruchomienie\n\tAbu uruchomic ninejszy program nalezy po nazwie podac argument [start]\n";
                cout << "\tprzykladowy rozklad zostanie pobrany z pliku 'input.csv' "
                        "wyswietlone zostanie menu programu z opcjami do wyboru\n";
                cout << "\tw przeciwnym wypadku nastapi skierowanie uzytkownika do ninejszej dokumentacji\n";
                cout << "\tAby zmienic rozklad startowy nalezy edytowac plik 'input.csv'\n";
                system("PAUSE");
                break;

            case 2:
                system("CLS");
                cout << "*Wyswietlanie rokladu:\n\tNa ekranie zostana wyswietlone wszystkie dostepne\n"
                        "\tw tym czasie pociagi, korzystajac z metody [wyswietlPociagi()] klasy [Stacja]\n"
                        "\tszczegolowy opis znajduje sie w odpowiednim pliku\n";
                system("PAUSE");
                break;

            case 3:
                system("CLS");
                cout << "*Dodawanie pociagu\n\tUzytkownik proszony jest o wybranie typu pociagu\n\t"
                        "ktory chce utworzyc, nastepnie postepujac zgodnie z instrkcjami podanymi\n\t"
                        "na ekranie wpisuje informacje potrzebne do utworzenia danego obiektu klasy\n\t"
                        "szczegolowe informacje o danym typie pociagu znajduja sie odpowiednio\n\t"
                        "w plikach [Drezyna], [Towarowy], [Pasazerski], [Train]\n\t"
                        "W razie podania zlych wartosci godzin przyjazdow uzytkownik zostanie skierowany\n\t"
                        "do ninejszej dokumentacji\n";
                cout << "*Usuwanie pociagu\n\tUzytkownik poproszony o podanie numeru pociagu\n\t"
                        "do usuniecia, jezeli funkcja znajdzie pociag o danym numerze usunie go z rozkladu\n\t"
                        "jesli nie zwroci blad\n";
                system("PAUSE");
                break;

            case 4:
                system("CLS");
                cout << "*Edycja statusu\n\tUzytkownik wybiera numer pociagu i podaje nowy\n\t"
                        "status, jezeli pociag o danym numerze znajduje sie w rozkladzie\n\t"
                        "jego status zostanie zmieniony, w przeciwnym wypadku wyswietli komunikat\n\t"
                        "o bledzie\n";
                system("PAUSE");
                break;

            case 5:
                system("CLS");
                cout << "*Wyszukiwanie\n\tUzytkownik podaje numer pociagu ktory chce znalezc\n\t"
                        "jesli dany pociag istnieje wyswietli jego informacje na ekranie\n\t"
                        "w przeciwnym razie bedzie to komunikat o braku takiego pociagu\n";
                system("PAUSE");
                break;

            case 6:
                system("CLS");
                cout << "\nKoniec dzialania\n";
                system("PAUSE");
                break;
            default:
                system("CLS");
                cout << "Nieprawidlowa opcja, sprobuj ponownie\n";
                system("PAUSE");
                break;
        }
        system("CLS");
    }while(op != 6);

    exit(0);
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

        if((g_przy > 23 || g_przy < 0) || (m_przy < 0 || m_przy > 60))
        {
            cout << "Podano nieprawidlowe dane" << endl;
            system("PAUSE");
            dokumentacja();
        }

        cout << "Czas odjazdu (godzina i minuty oddzielone spacja): ";
        cin >> g_odj >> m_odj;

        if((g_odj > 23 || g_odj < 0) || (m_odj < 0 || m_odj > 60))
        {
            cout << "Nieprawidlowe dane" << endl;
            system("PAUSE");
            dokumentacja();
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

        if((g_przy > 23 || g_przy < 0) || (m_przy < 0 || m_przy > 60))
        {
            cout << "Nieprawidlowe dane\n";
            system("PAUSE");
            dokumentacja();
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

        if((g_przy > 23 || g_przy < 0) || (m_przy < 0 || m_przy > 60))
        {
            cout << "Nieprawidlowe dane\n";
            system("PAUSE");
            dokumentacja();
        }

        cout << "Status: ";
        cin.ignore();
        getline(cin, status);

        s->dodajPociag(numer, peron, g_przy, m_przy, status);
    }

    cout << "Do rozkladu pomyslnie dodano pociag" << endl;
}