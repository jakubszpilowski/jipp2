//
// Created by Lenovo on 12.01.2022.
//
#ifndef JIPP2_SMARTPTR_H
#define JIPP2_SMARTPTR_H
#include <iostream>

using namespace std;

template <typename T>
class MyUniquePtr{
private:
    T* ptr;

public:
    MyUniquePtr(T object);
    MyUniquePtr(MyUniquePtr& ptr) = delete;
    MyUniquePtr operator=(const MyUniquePtr &rhs) = delete;
    ~MyUniquePtr();
};

template<typename T>
class MySharedPtr{
private:
    T* ptr;
    int *counter;

public:
    MySharedPtr(T obj);
    MySharedPtr(MySharedPtr &P);
    MySharedPtr operator=(MySharedPtr &rhs) = delete;
    ~MySharedPtr();
};

#endif //JIPP2_SMARTPTR_H
