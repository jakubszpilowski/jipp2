//
// Created by Lenovo on 12.01.2022.
//
#include <iostream>
#include <memory>

using namespace std;

class MyTheBestClass {
public:
    MyTheBestClass() {
        cout<< "Hello, I'm MyTheBestClass constructor" << endl;
    }

    ~MyTheBestClass() {
        cout<< "Hello, I'm MyTheBestClass destructor" << endl;
    }

    void function() {
        cout<< "Hello, I'm MyTheBestClass method" << endl;
    }
};

int main() {
    unique_ptr<int> p(new int);
    //unique_ptr<int> p(new int(100)); //Ustawianie wartości domyślnej zmiennej
    unique_ptr<int> pp = make_unique<int>();
    //unique_ptr<int> pp = make_unique<int>(69); //ustawienie wartości domyślnej zmiennej

    cout << "p adres:" << p.get() << "\t\tp wartość:" << *p <<endl;
    cout << "p adres:" << pp.get() << "\t\tp wartość:" << *pp <<endl;

    unique_ptr<int> ptr = make_unique<int>(6666);
    cout << "p adres: \t" << p.get() << endl;
    //unique_ptr<int> p_copy = p;
    unique_ptr<int> p_copy = move(ptr); //Przeniesienie własności z obiektu p do p_copy

    cout << "p adres: \t" << ptr.get() << endl;
    cout << "p_copy adres:\t" << p_copy.get() << endl;

    {
        unique_ptr<MyTheBestClass> mtbc = make_unique<MyTheBestClass>();
        mtbc->function();
        cout<< "Teraz będzie cin, aby zatrzymać program" <<endl;
        string temp;
        cin >> temp;
    }
    cout << "End app" << endl;

    return 0;
}
