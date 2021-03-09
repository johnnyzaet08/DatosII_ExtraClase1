#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Node.h"
#include "Node.cpp"

using namespace std;

template <class T>

class List{
    public:
        List();
        ~List();

        void add(T);
        void remove(T);
        void search(T);
        void print();

    private:
        Node<T> *ptr_head;
        int num_nodes;
};

#endif // LIST_H