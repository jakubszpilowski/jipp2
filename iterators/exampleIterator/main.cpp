//
// Created by Lenovo on 08.12.2021.
//
#include <iostream>
#include <cctype>
#include <list>

using namespace std;

int main(){
    list<char> word;
    list<char>::iterator x;

    /*
    char* w = new char[20];
    cout << "Enter a word: ";
    cin >> w;
*/
    char a;
    cout << "Keep writing characters (! will stop the loop)\n";
    do{
        cin >> a;
        word.push_back(a);
    }while(a != 33);

    cout << "Before: ";
    for(x = word.begin(); x != word.end(); x++)
        cout << *x;
    cout << endl;

    for(x = word.begin(); x != word.end(); x++)
        *x = toupper(*x);

    cout << "After: ";
    for(x = word.begin(); x != word.end(); x++)
        cout << *x;
    cout << endl;

   // delete[] w;
    return 0;
}