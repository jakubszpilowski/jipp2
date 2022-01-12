//
// Created by Lenovo on 12.01.2022.
//
#include "SmartPtr.h"

template <typename T>
MyUniquePtr<T>::MyUniquePtr(T obj){
    ptr = obj;
}

template<typename T>
MyUniquePtr<T>::~MyUniquePtr() {
    delete ptr;
}

template<typename T>
MySharedPtr<T>::MySharedPtr(T obj) {
    ptr = obj;
    counter = new int;
    *counter = 1;
}

template<typename T>
MySharedPtr<T>::MySharedPtr(MySharedPtr &P) {
    P.ptr = ptr;
    (*counter)++;
    P.counter = counter;
}

template<typename T>
MySharedPtr<T>::~MySharedPtr() {
    if(*counter == 1)
        delete ptr;
}
