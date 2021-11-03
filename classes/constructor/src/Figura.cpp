//
// Created by Lenovo on 03.11.2021.
//

#include "Figura.h"

Figura::Figura(int n, int **tab): n(n), tab(tab){
    cout << "Wywolano kostrutor" << endl;
    cout << "Podaj wspolrzedne " << n << " punktow" << endl;
    for(int i = 0; i < n; ++i)
        cin >> tab[i][0] >> tab[i][1];
}

void Figura::showTab() {
    cout << "Punkt\tWpolrzedne" << endl;
    for(int i = 0; i < n; ++i)
        cout << i << "\t" << tab[i][0] << " " << tab[i][1] << endl;
}
