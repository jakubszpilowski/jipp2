//
// Created by Lenovo on 22.10.2021.
//
#include "matrixLib.h"
#include <cstring>

int main(int argc, char *argv[]){
    int **A, **B, **C, rows, cols, cols2;
    double **Ad, **Bd, **Cd;
    string opcja;
    unsigned  power;

    if(argc == 2) {
        if (strcmp(argv[1], "addMatrix") == 0) {
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy: ";
            cin >> rows;
            cout << "Liczbe kolumn macierzy: ";
            cin >> cols;
            cout << "Utworzyc macierz calkowita czy zmiennoprzecinkowa?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                A = defineMatrix(rows, cols);
                B = defineMatrix(rows, cols);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(A, rows, cols);
                cout << "Wypelnij macierz B" << endl;
                fillMatrix(B, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(A, rows, cols);
                cout << "\nB:" << endl;
                showMatrix(B, rows, cols);
                A = addMatrix(A, B, rows, cols);
                cout << "\nA+B:" << endl;
                showMatrix(A, rows, cols);
                deleteMatrix(A, rows);
                deleteMatrix(B, rows);
            } else if (opcja == "d") {
                Ad = defineMatrix(rows, cols, 0);
                Bd = defineMatrix(rows, cols, 0);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(Ad, rows, cols);
                cout << "Wypelnij macierz B" << endl;
                fillMatrix(Bd, rows, cols);
                cout << "\nA:"<< endl;
                showMatrix(Ad, rows, cols);
                cout << "\nB:" << endl;
                showMatrix(Bd, rows, cols);
                Ad = addMatrix(Ad, Bd, rows, cols);
                cout << "\nA+B:" << endl;
                showMatrix(Ad, rows, cols);
                deleteMatrix(Ad, rows, 0);
                deleteMatrix(Bd, rows, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "subtractMatrix") == 0){
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy: ";
            cin >> rows;
            cout << "Liczbe kolumn macierzy: ";
            cin >> cols;
            cout << "Utworzyc macierz calkowita czy zmiennoprzecinkowa?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                A = defineMatrix(rows, cols);
                B = defineMatrix(rows, cols);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(A, rows, cols);
                cout << "Wypelnij macierz B" << endl;
                fillMatrix(B, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(A, rows, cols);
                cout << "\nB:" << endl;
                showMatrix(B, rows, cols);
                A = subtractMatrix(A, B, rows, cols);
                cout << "\nA-B:" << endl;
                showMatrix(A, rows, cols);
                deleteMatrix(A, rows);
                deleteMatrix(B, rows);
            } else if (opcja == "d") {
                Ad = defineMatrix(rows, cols, 0);
                Bd = defineMatrix(rows, cols, 0);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(Ad, rows, cols);
                cout << "Wypelnij macierz B" << endl;
                fillMatrix(Bd, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(Ad, rows, cols);
                cout << "\nB:" << endl;
                showMatrix(Bd, rows, cols);
                Ad = subtractMatrix(Ad, Bd, rows, cols);
                cout << "\nA-B:" << endl;
                showMatrix(Ad, rows, cols);
                deleteMatrix(Ad, rows, 0);
                deleteMatrix(Bd, rows, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "multiplyMatrix") == 0){
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy: ";
            cin >> rows;
            cout << "Liczbe kolumn macierzy: ";
            cin >> cols;
            cout << "Liczbe kolumn drugiej macierzy: ";
            cin >> cols2;
            cout << "Utworzyc macierz calkowita czy zmiennoprzecinkowa?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                A = defineMatrix(rows, cols);
                B = defineMatrix(cols, cols2);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(A, rows, cols);
                cout << "Wypelnij macierz B" << endl;
                fillMatrix(B, cols, cols2);
                cout << "\nA:"<< endl;
                showMatrix(A, rows, cols);
                cout << "\nB:" << endl;
                showMatrix(B, cols, cols2);
                C = multiplyMatrix(A, B, rows, cols, cols2);
                cout << "\nA*B:" << endl;
                showMatrix(C, rows, cols2);
                deleteMatrix(A, rows);
                deleteMatrix(B, cols);
                deleteMatrix(C, rows);
            } else if (opcja == "d") {
                Ad = defineMatrix(rows, cols, 0);
                Bd = defineMatrix(cols, cols2, 0);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(Ad, rows, cols);
                cout << "Wypelnij macierz B" << endl;
                fillMatrix(Bd, cols, cols2);
                cout << "\nA:" << endl;
                showMatrix(Ad, rows, cols);
                cout << "\nB:" << endl;
                showMatrix(Bd, cols, cols2);
                Cd = multiplyMatrix(Ad, Bd, rows, cols, cols2);
                cout << "\nA*B:" << endl;
                showMatrix(Cd, rows, cols2);
                deleteMatrix(Ad, rows, 0);
                deleteMatrix(Bd, cols, 0);
                deleteMatrix(Cd, rows, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "multiplyByScalar") == 0){
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy: ";
            cin >> rows;
            cout << "Liczbe kolumn macierzy: ";
            cin >> cols;
            cout << "Utworzyc macierz calkowita czy zmiennoprzecinkowa?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                cout << "Podaj skalar przez ktory chcesz wymnozyc macierz: ";
                int scalar;
                cin >> scalar;
                A = defineMatrix(rows, cols);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(A, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(A, rows, cols);
                A = multiplyByScalar(A, rows, cols, scalar);
                cout << "\n" << scalar << "*A:" << endl;
                showMatrix(A, rows, cols);
                deleteMatrix(A, rows);
            } else if (opcja == "d") {
                cout << "Podaj skalar przez ktory chcesz przemnozyc macierz: ";
                double scalar;
                cin >> scalar;
                Ad = defineMatrix(rows, cols, 0);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(Ad, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(Ad, rows, cols);
                Ad = multiplyByScalar(Ad, rows, cols, scalar);
                cout << "\n" << scalar << "*A:" << endl;
                showMatrix(Ad, rows, cols);
                deleteMatrix(Ad, rows, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "transpozeMatrix") == 0){
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy: ";
            cin >> rows;
            cout << "Liczbe kolumn macierzy: ";
            cin >> cols;
            cout << "Utworzyc macierz calkowita czy zmiennoprzecinkowa?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                A = defineMatrix(rows, cols);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(A, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(A, rows, cols);
                B = transpozeMatrix(A, rows, cols);
                cout << "\nAt:" << endl;
                showMatrix(B, cols, rows);
                deleteMatrix(A, rows);
                deleteMatrix(B, cols);
            } else if (opcja == "d") {
                Ad = defineMatrix(rows, cols, 0);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(Ad, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(Ad, rows, cols);
                Bd = transpozeMatrix(Ad, rows, cols);
                cout << "\nAt:" << endl;
                showMatrix(Bd, cols, rows);
                deleteMatrix(Ad, rows, 0);
                deleteMatrix(Bd, cols, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "powerMatrix") == 0){
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy: ";
            cin >> rows;
            cout << "Liczbe kolumn macierzy: ";
            cin >> cols;
            cout << "Potege: ";
            cin >> power;
            cout << "Utworzyc macierz calkowita czy zmiennoprzecinkowa?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                A = defineMatrix(rows, cols);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(A, rows, cols);
                B = powerMatrix(A, power, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(A, rows, cols);
                cout << "\nA^" << power << ":" << endl;
                showMatrix(B, rows, cols);
                deleteMatrix(A, rows);
                if(B != NULL) deleteMatrix(B, rows);
            } else if (opcja == "d") {
                Ad = defineMatrix(rows, cols, 0);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(Ad, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(Ad, rows, cols);
                Bd = powerMatrix(Ad, power, rows, cols);
                cout << "\nA^" << power << ":" << endl;
                showMatrix(Bd, rows, cols);
                deleteMatrix(Ad, rows, 0);
                if(Bd != NULL) deleteMatrix(Bd, rows, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "determinantMatrix") == 0){
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy (macierz kwadratowa): ";
            cin >> rows;
            cout << "Utworzyc macierz calkowita czy zmiennoprzecinkowa?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                A = defineMatrix(rows, rows);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(A, rows, rows);
                cout << "\nA:" << endl;
                showMatrix(A, rows, rows);
                cout << "\nWyznacznik macierzy A = " << determinantMatrix(A, rows) << endl;
                deleteMatrix(A, rows);
            } else if (opcja == "d") {
                Ad = defineMatrix(rows, rows, 0);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(Ad, rows, rows);
                cout << "\nA:" << endl;
                showMatrix(Ad, rows, rows);
                cout << "\nWyznacznik macierzy A = " << determinantMatrix(Ad, rows) << endl;
                deleteMatrix(Ad, rows, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "matrixIsDiagonal") == 0){
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy: ";
            cin >> rows;
            cout << "Liczbe kolumn macierzy: ";
            cin >> cols;
            cout << "Utworzyc macierz calkowita czy zmiennoprzecinkowa?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                A = defineMatrix(rows, cols);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(A, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(A, rows, cols);
                if(matrixIsDiagonal(A, rows, cols))
                    cout << "\nMacierz jest diagonalna " << endl;
                else
                    cout << "\nMacierz nie jest diagonalna " << endl;
                deleteMatrix(A, rows);
            } else if (opcja == "d") {
                Ad = defineMatrix(rows, cols, 0);
                cout << "Wypelnij macierz A" << endl;
                fillMatrix(Ad, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(Ad, rows, cols);
                if(matrixIsDiagonal(Ad, rows, cols))
                    cout << "\nMacierz jest diagonalna " << endl;
                else
                    cout << "\nMacierz nie jest diagonala" << endl;
                deleteMatrix(Ad, rows, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "swap") == 0){
            cout << "Zamienic dwie liczby calkowite czy dwie zmiennoprzecinkowe?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                cout << "Podaj" << endl;
                cout << "Liczba 1: ";
                cin >> rows;
                cout << "Liczba 2: ";
                cin >> cols;
                cout << "\nPrzed zamiana: a = " << rows << " b = " << cols << endl;
                swap(rows, cols);
                cout << "Po zamianie  a = " << rows << " b = " << cols << endl;
            } else if (opcja == "d") {
                cout << "Podaj" << endl;
                double drows, dcols;
                cout << "Liczba 1: ";
                cin >> drows;
                cout << "Liczba 2: ";
                cin >> dcols;
                cout << "\nPrzed zamiana: a = " << drows << " b = " << dcols << endl;
                swap(drows, dcols);
                cout << "Po zamianie a = " << drows << " b = " << dcols << endl;
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "sortRow") == 0){
            cout << "Podaj\nRozmiar tablicy: ";
            cin >> rows;
            cout << "Sortowanie tablicy calkowitej czy zmiennoprzecinkowej?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                int *tab = new int[rows];
                cout << "Wpisz " << rows << " liczb" << endl;
                for(int i = 0; i < rows; ++i)
                    cin >> tab[i];
                sortRow(tab, rows);
                cout << "Po sortowaniu: ";
                for(int i = 0; i < rows; ++i)
                    cout << tab[i] << " ";
                delete[] tab;
            } else if (opcja == "d") {
                double *tab = new double [rows];
                cout << "Wpisz " << rows << " liczb" << endl;
                for(int i = 0; i < rows; ++i)
                    cin >> tab[i];
                sortRow(tab, rows);
                cout << "Po sortowaniu: ";
                for(int i = 0; i < rows; ++i)
                    cout << tab[i] << " ";
                delete[] tab;
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else if(strcmp(argv[1], "sortRowsInMatrix") == 0){
            cout << "Podaj" << endl;
            cout << "Liczbe wierszy macierzy: ";
            cin >> rows;
            cout << "Liczbe kolumn macierzy: ";
            cin >> cols;
            cout << "Sortowanie macierzy calkowitej czy zmiennoprzecinkowej?\n wpisz: 'i' lub 'd'" << endl;
            cin >> opcja;
            if (opcja == "i") {
                A = defineMatrix(rows, cols);
                cout << "Wypelnij macierz" <<endl;
                fillMatrix(A, rows, cols);
                cout << "\nPrzed sortowaniem\nA:" << endl;
                showMatrix(A, rows, cols);
                cout << "Po sortowaniu" << endl;
                sortRowsInMatrix(A, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(A, rows, cols);
                deleteMatrix(A, rows);
            } else if (opcja == "d") {
                Ad = defineMatrix(rows, cols, 0);
                cout << "Wypelnij macierz" <<endl;
                fillMatrix(Ad, rows, cols);
                cout << "\nPrzed sortowaniem\nA:" << endl;
                showMatrix(Ad, rows, cols);
                cout << "Po sortowaniu" << endl;
                sortRowsInMatrix(Ad, rows, cols);
                cout << "\nA:" << endl;
                showMatrix(Ad, rows, cols);
                deleteMatrix(Ad, rows, 0);
            } else {
                cout << "Nieprawidlowa opcja " << endl;
                showHelp();
            }
        } else
            showHelp();
    } else
        showHelp();

    return 0;
}
