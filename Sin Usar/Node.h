#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class T>

class Node{
    public:
        Node();
        Node(T);
        ~Node();
        

        Node *next;
        T value;

        void delete(Node);
        new(T, int memory);
        void print();

};

#endif // NODE_H