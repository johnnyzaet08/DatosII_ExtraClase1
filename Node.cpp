#include <iostream>
#include <stdlib.h>

using namespace std;

class Node{
    public:
        Node(int);

        //Collector *collect = Collector::getInstance();
		Node *next;
        int value;

        void operator delete(void*);
        void* operator new(size_t);
        void print();

};

//Constructor
Node::Node(int value_){
    value = value_;
    next = NULL;
}

//Crear nuevo nodo
void* Node::operator new(size_t size){
    cout << "Se creo nuevo espacio" << endl;
    void *node;
    node = malloc(size);
    return node;
}

//Eliminar nodo
void Node::operator delete(void* ptr_node){
    Node *ptr = (Node*) ptr_node;
    cout << "aqui va bien" << endl;
    //collect->add(&ptr);
    cout << "parece que paso por el collect bien" << endl;
}

//Imprimir el valor
void Node::print(){
    cout << value;
}

