//
// Created by Lenovo on 19.10.2021.
//
#include "ptrs.h"

/**Funkcja zwraca średnią z dwóch liczb poprzez wskaźniki
 * @param a wskaźnik na liczbę x
 * @param b wskaźnik na liczbę y
 * @return średnia arytmetyczna x i y
 */
double average(int *a, int *b){
    return (double)(*a + *b) / 2;
}

/**Funkcja wyświetla na ekran elementy tablicy większe od 0
 * @param t tablica
 * @param n rozmiar tablicy
 */
void showArr(int *t, int n) {
    for(int i = 0; i < n; ++i){
        if(*(t+i) > 0)
            cout << *(t+i) << " ";
    }
    cout << endl;
}

/**Funkcja sortuje zmienne poprzez wskaźniki
 * @param a wskaźnik na zmienną x
 * @param b wskaźnik na zmienną y
 * @param c wskaźnik na zmienną z
 */
void sort(int *a, int *b, int *c){
    if(*a >= *b) {
        if (*a >= *c) {
            if (*b >= *c)
                cout << *c << " " << *b << " " << *a << endl;
            else
                cout << *b << " " << *c << " " << *a << endl;
        } else
            cout << *b << " " << *a << " " << *c << endl;
    }
    else{
        if(*a >= *c)
            cout << *c << " " << *a << " " << *b << endl;
        else {
            if(*b >= *c)
                cout << *a << " " << *c << " " << *b << endl;
            else
                cout << *a << " " << *b << " "  << *c << endl;
        }
    }
}

/**Funkcja zapisuje wartość x do zmiennej wskazywanej przez *w
 * @param x nowa wartość którą chcemy nadać
 * @param w wskaźnik na zmienna
 * @return wskaźnik
 */
int *declare(int x, int *w){
    *w = x;
    return w;
}