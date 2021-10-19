//
// Created by Lenovo on 19.10.2021.
//

#include "arr.h"

/**Funkcja zwraca losową wartość z przedziału <a,b>
 * @param a począte przedziału
 * @param b koniec przedziału
 * @return liczba losowa <a,b>
 */
int randomInt(int a, int b){
    int x = rand() % (b - a) + a;
    return x;
}

/**Funcja wyświetlająca tablice
 * @param t tablica
 * @param n rozmiar tablicy
 */
void showArray(int *t, int n){
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }
    cout << endl;
}

/**Funkcja wypełniająca tablice liczbami od <1, 100>
 * @param t tablica
 * @param n rozmiar tablicy
 */
void generateArray(int *t, int n){
    int a;
    for(int i = 0; i < n; ++i){
        a = rand() % 100 + 1;
        t[i] = a;
    }
}

/**Funkcja zwracająca maksymalną wartość z tablicy
 * @param t tablica
 * @param n rozmiar tablicy
 * @return maksymalny element tablicy
 */
int maxArray(int *t, int n){
    int max = t[0];
    for(int i = 1; i < n; ++i) {
        if(max < t[i])
            max = t[i];
    }
    return max;
}

/**Funkcja odwracająca tablice
 * @param t tablica
 * @param n rozmiar tablicy
 */
void reverseArray(int *t, int n){
    for(int i = 0; i < n / 2; ++i){
        swap(t[i], t[n - i - 1]);
    }
}
