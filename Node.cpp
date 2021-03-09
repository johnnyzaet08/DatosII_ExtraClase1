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

        void deletee();
        void neww(int);
        void print();

};

//Constructor 1
template <typename T>
Node<T>::Node(){
    value == NULL;
    next == NULL;
}

//Constructor 2
template <typename T>
Node<T>::Node(T value_){
    value = value_;
    next = NULL;
}

template <typename T>
void Node<T>::neww(int MemoryValue){
    cout << "Espacio de memoria malloc" << endl;
}

template <typename T>
void Node<T>::deletee(){
    delete this;
}

//Imprimir el valor
template <typename T>
void Node<T>::print(){
    cout << value;
}

template <typename T>
Node<T>::~Node() {}
