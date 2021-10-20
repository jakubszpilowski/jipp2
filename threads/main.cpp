//
// Created by Lenovo on 20.10.2021.
//

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

int main(){
    int a, b, c;
    cout << "Zadanie 1\nPodaj dwie liczby naturalne" << endl;
    cin >> a >> b;

    try{
        if(b == 0)
            throw overflow_error("Dzielenie przez zero");
        if(a % b != 0)
            throw runtime_error("Wynik nie jest liczba naturalna -> ulamek");
        c = a / b;
        cout << "Wynik dzielenia " << c << endl;
    } catch(overflow_error &err){
        cout << err.what()  << endl;
    } catch(runtime_error & err2){
        cout << err2.what() << endl;
    }

    system("PAUSE");

    string msg;
    int x;
    cout << "Zadanie 2\nWczytaj ciag znakow a program sprobuje skonwertowac go na zmienna typu int" << endl;
    cin >> msg;

    try{
        x = stoi(msg);
    } catch(invalid_argument &e1){
        cout << "Wprowadzony ciag zwiera nieprawidlowe znaki" << endl;
        return -1;
    } catch(out_of_range &e2){
        cout << "Wprowadzona liczba jest za duza" << endl;
        return -2;
    }
    cout << "Liczba po skonwertowaniu " << x << endl;

    return 0;
}