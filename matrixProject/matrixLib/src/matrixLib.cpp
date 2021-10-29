//
// Created by Lenovo on 22.10.2021.
//
#include "matrixLib.h"

//MACIERZE CAŁKOWITE
/**Funkcja dodaje dwie macierze
 * @param A macierz całkowita A
 * @param B macierz całkowita B
 * @param r ilość wierszy macierzy
 * @param c ilość kolumn macierzy
 * @return zwaraca wskaźnik na macierz po zsumowaniu
 */
int **addMatrix(int **A, int **B, int r, int c){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j)
            A[i][j] += B[i][j];
    }
    return A;
}

/**Funkcja odemująca macierze
 * @param A macierz całkowita A
 * @param B macierz całkowita B
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return zwraca wskaźnik do macierzy po odjęciu
 */
int **subtractMatrix(int **A, int **B, int r, int c){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j)
            A[i][j] -= B[i][j];
    }
    return A;
}

/**Funkcja mnożąca macierz przez macierz
 * @param A macierz całkowita A
 * @param B macierz całkowita B
 * @param r liczba wierszy macierzy
 * @param c1 liczba kolumn macierzy A
 * @param c2 liczba kolumn macierzy B
 * @return wskaźnik na macierz po wymnożeniu
 */
int **multiplyMatrix(int **A, int **B, int r, int c1, int c2){
    int s;
    int **C = defineMatrix(r ,c2);

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c2; ++j){
            s = 0;
            for(int k = 0; k < c1; ++k)
                s+= A[i][k]*B[k][j];
            C[i][j] = s;
        }
    return C;
}

/**Funkcja mnoży macierz przez skalar
 * @param A macierz całkowita A
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @param s skalar przez który mnożymy
 * @return zwraca wymnożoną macierz
 */
int **multiplyByScalar(int **A, int r, int c, int s){
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            A[i][j] *= s;

    return A;
}

/**Funkcja transponująca macierz
 * @param A macierz całkowita A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca macierz transponowaną
 */
int **transpozeMatrix(int **A, int r, int c){
    int **At = defineMatrix(c, r);

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            At[j][i] = A[i][j];

    return At;
}

/**Funkcja potęgująca macierz
 * @param A macierz całkowita A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @param p potęga
 * @return zwraca spotęgowaną macierz
 */
int **powerMatrix(int **A, unsigned p, int r, int c){
    int **B = defineMatrix(r, c);
    B = multiplyMatrix(A, A, r, c, c);
    if(p == 1)
        return A;
    if(p == 2)
        return B;
    else
        for(unsigned i = 3; i <= p; ++i)
            B = multiplyMatrix(B, A, r, c, c);

    return B;
}

/**Funkcja obliczająca wyznacznik macierzy
 * @param A macierz całkowita A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca wyznacznik
 */
int determinantMatrix(int **A, int r){
    int det = 0;
    if(r == 1)
        return A[0][0];
    if(r == 2)
        return (A[0][0]*A[1][1])-(A[1][0]*A[0][1]);

    int **subA = defineMatrix(r, r);
    int sign = 1;

    for(int i = 0; i < r; ++i){
        subMatrix(A, subA, 0, i, r);
        det += sign * A[0][i]* determinantMatrix(subA, r - 1);
        sign = -sign;
    }
    return det;
}

/**Funkcja sprawdzająca czy podana macierz jest diagonalna
 * @param A macierz całkowita A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca true - jeśli macierz jest diagonalna lub false - jeśli nie jest
 */
bool matrixIsDiagonal(int **A, int r, int c){
    if(r != c)
        return false;

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            if(i != j)
                if(A[i][j] != 0)
                    return false;

    return true;
}

/**Funkcja zamieniająca dwie wartości miejscami (parametry przekazywane przez referencje)
 * @param a pierwsza zmienna przekazana przez referencje
 * @param b druga zmienna przekazana przez referencje
 */
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

/**Funkcja sortująca bąbelkowo tablice
 * @param tab tablica do posortowania
 * @param c liczba kolumn
 */
void sortRow(int *tab, int c){
    for(int i = 0; i < c; ++i){
        for(int j = 1; j < c - i; ++j)
            if(tab[j - 1] > tab[j])
                swap(tab[j-1], tab[j]);
    }
}

/**Funkcja sortująca wiersze w macierzy
 * @param A macierz całkowita
 * @param r liczba wierszy
 * @param c liczba kolumn
 */
void sortRowsInMatrix(int **A, int r, int c){
    for(int i = 0; i < r; ++i)
        sortRow(A[i], c);
}


//MACIERZE ZMIENNOPRZECINKOWE
/**Funkcja dodająca dwie macierze zmiennoprzecinkowe
 * @param A macierz A
 * @param B macierz B
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca wskaźnik na zsumowaną macierz
 */
double **addMatrix(double **A, double **B, int r, int c){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j)
            A[i][j] += B[i][j];
    }
    return A;
}

/**Funkcja odejmująca macierze
 * @param A macierz A
 * @param B macierz B
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca macierz różnicy
 */
double **subtractMatrix(double **A, double **B, int r, int c){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j)
            A[i][j] -= B[i][j];
    }
    return A;
}

/**Funkcja mnożąca macierze
 * @param A macierz A
 * @param B macierz B
 * @param r liczba wierszy
 * @param c1 liczba kolumn macierz A
 * @param c2 liczba kolumn macierzy B
 * @return zwraca macierz, będącą iloczynem A i B
 */
double **multiplyMatrix(double **A, double **B, int r, int c1, int c2){
    double s;
    double **C = defineMatrix(r ,c2, 0);

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c2; ++j){
            s = 0;
            for(int k = 0; k < c1; ++k)
                s+= A[i][k]*B[k][j];
            C[i][j] = s;
        }
    return C;
}

/**Funkcja mnożąca macierz przez skalar
 * @param A macierz A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @param s skalar
 * @return zwraca macierz po wymnożeniu
 */
double **multiplyByScalar(double **A, int r, int c, double s){
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            A[i][j] *= s;

    return A;
}

/**Funkcja transponująca macierz
 * @param A macierz A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca macierz transponowaną
 */
double **transpozeMatrix(double **A, int r, int c){
    double **At = defineMatrix(c, r, 0);

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            At[j][i] = A[i][j];

    return At;
}

/**Funkcja potęgująca macierz
 * @param A macierz A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @param p potęga
 * @return zwraca spotęgowaną macierz
 */
double **powerMatrix(double **A, unsigned p, int r, int c){
    double **B = defineMatrix(r, c, 0);
    B = multiplyMatrix(A, A, r, c, c);
    if(p == 1)
        return A;
    if(p == 2)
        return B;
    else
        for(unsigned i = 3; i <= p; ++i)
            B = multiplyMatrix(B, A, r, c, c);

    return B;
}

/**Funkcja licząca wyznacznik macierzy
 * @param A macierz A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca wyznacznik macierzy
 */
double determinantMatrix(double **A, int r){
    double det = 0;
    if(r == 1)
        return A[0][0];
    if(r == 2)
        return (A[0][0]*A[1][1])-(A[1][0]*A[0][1]);

    double **subA = defineMatrix(r, r, 0);
    double sign = 1;

    for(int i = 0; i < r; ++i){
        subMatrix(A, subA, 0, i, r);
        det += sign * A[0][i]* determinantMatrix(subA, r - 1);
        sign = -sign;
    }
    return det;
}

/**Funkcja sprawdzająca czy macierz jest diagonalna
 * @param A macierz A
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca true jeśli jest diagonalna i false jeśli nie jest
 */
bool matrixIsDiagonal(double **A, int r, int c){
    if(r != c)
        return false;

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            if(i != j)
                if(A[i][j] != 0)
                    return false;

    return true;
}

/**Funkcja zmieniajaca dwie wartości miejscami
 * @param a pierwsza liczba przekazana przez referencje
 * @param b druga liczba przekazana przez referencje
 */
void swap(double &a, double &b){
    double tmp = a;
    a = b;
    b = tmp;
}

/**Funkcja sortująca bąbelkowo tablice
 * @param tab tablica do posortowania
 * @param c liczba kolumn
 */
void sortRow(double *tab, int c){
    for(int i = 0; i < c; ++i){
        for(int j = 1; j < c - i; ++j)
            if(tab[j - 1] > tab[j])
                swap(tab[j-1], tab[j]);
        }
}

/**Funkcja sortująca wszystkie wiersze macierzy osobno
 * @param A macierz do posortowania
 * @param r liczba wierszy
 * @param c liczba kolumn
 */
void sortRowsInMatrix(double **A, int r, int c){
    for(int i = 0; i < r; ++i)
        sortRow(A[i], c);
}



//FUNKCJE POMOCNICZE
/**Funkcja wypełnia podmacierz do wyliczenia wyznacznika (rozwinięcie Laplace'a)
 * @param A macierz główna
 * @param subA podmacierz powstała po wykreśleniu wiersza p i kolumny q
 * @param p wykreślony wiersz z macierzy głównej
 * @param q wykreślona kolumna z macierzy głównej
 * @param r liczba wierszy i kolumn w macierzy
 * (liczba wierszy i kolumn jest równa ponieważ nie możemy obliczyć wyznacznika z macierzy niekwadratowej)
 */
void subMatrix(int **A, int **subA, int p, int q, int r){
    int i = 0, j = 0;

    for(int row = 0; row < r; ++row){
        for(int col = 0; col < r; ++col){
            if(row != p && col != q) {
                subA[i][j++] = A[row][col];
                if(j == r - 1){
                    j = 0;
                    i++;
                }
            }
        }
    }
}

/**Funkcja tworząca macierz
 * @param r liczba wierszy
 * @param c liczba kolumn
 * @return zwraca wskaźnik na macierz
 */
int **defineMatrix(int rows, int cols){
    int **A = new int*[rows];
    for(int i = 0; i < rows; ++i)
        A[i] = new int[cols];
    return A;
}

/**Funkcja wyświetlająca macierz
 * @param A macierz którą chcemy wyświetlić
 * @param r liczba wierszy
 * @param c liczba kolumn
 */
void showMatrix(int **A, int r, int c){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

/**Funkcja usuwająca macierz
 * @param A macierz do usunięcia
 * @param r liczba wierszy
 */
void deleteMatrix(int **A, int r){
    for(int i = 0; i < r; ++i)
        delete[] A[i];
    delete[] A;
    A = NULL;
    cout << "\nPomyslnie zwolniono pamiec macierzy " << endl;
}

/**Funkcja wypełniająca macierz
 * @param A macierz do wypełnienia
 * @param r liczba wierszy
 * @param c liczba kolumn
 */
void fillMatrix(int **A, int r, int c){
    cout << "Wypelniasz macierz " << r << "x" << c << "\nPodaj " << r*c << " wartosci" << endl;
    for(int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> A[i][j];
            while(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Zle wejscie, wpisz liczbe" << endl;
                cin >> A[i][j];
            }
        }
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


/**Funkcja tworząca macierz zmiennoprzecinkową o podanych wymiarach
 * @param rows liczba wierszy
 * @param cols liczba kolumn
 * @param tmp zbędny argument pomocniczy
 * @return zwraca macierz o podanych wymiarach
 */
double **defineMatrix(int rows, int cols, int tmp){
    double **A = new double*[rows];
    for(int i = 0; i < rows; ++i)
        A[i] = new double[cols];

    return A;
}

/**Funkcja usuwająca macierz
 * @param A macierz do usunięcia
 * @param r liczba wierszy
 * @param tmp pomocniczy argument
 */
void deleteMatrix(double **A, int r, int tmp){
    for(int i = 0; i < r; ++i)
        delete[] A[i];
    delete[] A;
    A = NULL;
    cout << "\nPomyslnie usunieto macierz z pamieci" << endl;
}

/**Funkcja wyświetlająca macierz
 * @param A macierz
 * @param r liczba wierszy
 * @param c liczba kolumn
 */
void showMatrix(double **A, int r, int c){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

/**Funkcja wypełniająca podmacierz (do liczenia wyznacznika)
 * @param A macierz główna
 * @param subA podmacierz macierzy A
 * @param p numer wykreślonego wiersza
 * @param q numer wykreślonej kolumny
 * @param r liczba wierszy macierzy głownej
 */
void subMatrix(double **A, double **subA, int p, int q, int r){
    int i = 0, j = 0;
    for(int row = 0; row < r; ++row){
        for(int col = 0; col < r; ++col){
            if(row != p && col != q) {
                subA[i][j++] = A[row][col];
                if(j == r - 1){
                    j = 0;
                    i++;
                }
            }
        }
    }
}

/**Funkcja wypełniająca macierz zmiennoprzecinkowa A
 * @param A macierz A
 * @param r liczba wierszy
 * @param c liczba kolumn
 */
void fillMatrix(double **A, int r, int c){
    cout << "Wypelniasz macierz  " << r << "x" << c << "\nPodaj " << r*c << " wartosci" << endl;
    for(int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> A[i][j];
            while(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Zle wejscie, wpisz liczbe" << endl;
                cin >> A[i][j];
            }
        }
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

//WYŚWIETLANIE DOKUMENTACJI
/**
    Funkcja wyświetlająca dokumentacje
 */
void showHelp(){
    int opcja;
    do{
        cout << "\nWitaj w dokumentacji, jesli nie wiesz jak dzialaja poszczegolne funkcjonalnosci"
                " wybierz odpowiedni numer opcji i przeczytaj instrukcje " << endl;
        cout << "1) Dzialanie programu i wprowadzanie wartosci do macierzy " << endl;
        cout << "2) Dodawanie macierzy " << endl;
        cout << "3) Odejmowanie macierzy " << endl;
        cout << "4) Mnozenie macierzy " << endl;
        cout << "5) Mnozenie macierzy przez skalar " << endl;
        cout << "6) Transponowanie macierzy " << endl;
        cout << "7) Potegowanie macierzy " << endl;
        cout << "8) Wyznacznik macierzy " << endl;
        cout << "9) Macierz diagonalna " << endl;
        cout << "10) Sortowanie wierszy i swap " << endl;
        cout << "0) Wyjscie z programu" << endl;
        cin >> opcja;

        switch(opcja){
            case 1:
                cout << "\nAby wywolac ponizszy program nalezy podac [nazwa_funkcjonalnosci]"
                        "\nMozliwe funkcjonalnosci: \n\t*addMatrix \t*subtractMatrix \t*multiplyMatrix"
                        "\n\t*multiplyByScalar \t*transpozeMatrix \t*powerMatrix \t*determinantMatrix"
                        "\n\t*matrixIsDiagonal \t*swap \t*sortRow \t*sortRowsInMatrix"
                        "\nPo wybraniu funkcjonalnosci uzytkownik zostanie poproszony o podanie wymiarow macierzy na ktorych "
                        "\nprogram ma prowadzic obliczenia oraz wybrac czy chcemy operowac na liczbach calkowitych "
                        "\nczy zmiennoprzecinkowych nastepnie poprosi o wypelnienie macierzy wartosciami ktore wprowadzane "
                        "\nsa bezposrednio z klawiatury wprowadzanie trwa do momentu wpisania wszystkich potrzebnych dla danej macierzy wartosci"
                        "\nUWAGA: podanie nieprawidlowych wartosci spowoduje wyswietlenie informacji o bledzie"
                        "\n\ti poprosi o podanie jej jeszcze raz"<< endl;
                system("PAUSE");
                break;
            case 2:
                cout << "\nFunkcja dodawania macierzy \n\t*addMatrix(A, B, rows, cols)\n"
                        "parametry: "
                        "\n@ A macierz "
                        "\n@ B macierz "
                        "\n@ rows liczba wierszy"
                        "\n@ cols liczba kolumn "
                        "\n@ return macierz po zsumowaniu"
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych" << endl;
                system("PAUSE");
                break;
            case 3:
                cout << "\nFunkcja odejmowania macierzy \n\t*subtractMatrix(A, B, rows, cols)\n"
                        "parametry: "
                        "\n@ A macierz "
                        "\n@ B macierz "
                        "\n@ rows liczba wierszy"
                        "\n@ cols liczba kolumn "
                        "\n@ return macierz po odjeciu"
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych" << endl;
                system("PAUSE");
                break;
            case 4:
                cout << "\nFunkcja mnozenia macierzy \n\t*multiplyMatrix(A, B, rows, cols1, cols2)\n"
                        "parametry: "
                        "\n@ A macierz "
                        "\n@ B macierz "
                        "\n@ rows liczba wierszy"
                        "\n@ cols1 liczba kolumn macierzy A "
                        "\n@ cols2 liczba kolumn macierzy B"
                        "\n@ return macierz po wymnozeniu "
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych" << endl;
                system("PAUSE");
                break;
            case 5:
                cout << "\nFunkcja mnozenia macierzy przez skalar\n\t*multiplyByScalar(A, rows, cols, scalar)\n"
                        "parametry: "
                        "\n@ A macierz "
                        "\n@ rows liczba wierszy "
                        "\n@ cols liczba kolumn "
                        "\n@ scalar skalar przez ktory mnozymy macierz"
                        "\n@ return macierz po wymnozeniu przez skalar "
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych" << endl;
                system("PAUSE");
                break;
            case 6:
                cout << "\nFunkcja transponowania macierzy \n\t*transpozeMatrix(A, rows, cols)\n"
                        "parametry: "
                        "\n@ A macierz"
                        "\n@ rows liczba wierszy "
                        "\n@ cols liczba kolumn"
                        "\n@ return macierz transponowana "
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych" << endl;
                system("PAUSE");
                break;
            case 7:
                cout << "\nFunkcja potegowania macierzy \n\t*powerMatrix(A, power, rows, cols)\n"
                        "parametry: "
                        "\n@ A macierz"
                        "\n@ p potega do ktorej podnosimy macierz"
                        "\n@ rows liczba wierszy "
                        "\n@ cols liczba kolumn"
                        "\n@ return macierz podniesiona do potegi"
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych" << endl;
                system("PAUSE");
                break;
            case 8:
                cout << "\nFunkcja liczenia wyznacznika macierzy \n\t*determinantMatrix(A, rows)\n"
                        "parametry: "
                        "\n@ A macierz"
                        "\n@ rows liczba wierszy "
                        "\n@ return wyznacznik macierzy "
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych" << endl;
                system("PAUSE");
                break;
            case 9:
                cout << "\nFunkcja sprawdzajaca czy macierz jest diagonalna \n\t*matrixIsDiagonal(A, rows, cols)\n"
                        "parametry: "
                        "\n@ A macierz"
                        "\n@ rows liczba wierszy "
                        "\n@ cols liczba kolumn"
                        "\n@ return 'true' albo 'false' jesli macierz jest/nie jest diagonalna "
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych"  << endl;
                system("PAUSE");
                break;
            case 10:
                cout << "\nFunkcje sortujace \n\t*sortRow(tab, cols)\n"
                        "parametry: "
                        "\n@ tab tablica ktora sortujemy"
                        "\n@ cols liczba kolumn"
                        "\nfunkcja dziala analogicznie dla tablic zmiennoprzecinkowych tak jak dla calkowitych"
                        "\n\t*sortRowsInMatrix(A, rows, cols)\n"
                        "parametry: "
                        "\n@ A macierz"
                        "\n@ rows liczba wierszy "
                        "\n@ cols liczba kolumn"
                        "\nfunkcja dziala analogicznie dla macierzy zmiennoprzecinkowych tak jak dla calkowitych"
                        "\nFunkcja zamiany wartosci \n\t*swap(&a, &b)\n"
                        "parametry: "
                        "\n@ &a zmienna 'a' podana przez referencje"
                        "\n@ &b zmienna 'b' podana przez referencje"
                        "\nfunkcja dziala analogicznie dla liczb zmiennoprzecinkowych tak jak dla calkowitych" << endl;
                system("PAUSE");
                break;
            case 0:
                cout << "\nKoniec programu " << endl;
                break;
            default:
                cout << "\nPodano nieprawidlowa opcje, sproboj ponownie" << endl;
                break;
        }

    }while(opcja != 0);
    cout << "\nDo zobaczenia" << endl;
}