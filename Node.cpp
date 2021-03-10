#include <iostream>
#include <stdlib.h>

using namespace std;

class Node{
    public:
        Node(int Value);

        //Collector *Collect;
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
    //Collect = NULL;
}

//Crear nuevo nodo
void* Node::operator new(size_t size){
    cout << "Espacio de memoria malloc" << endl;
    void *node;
    node = malloc(size);
    return node;
}

//Eliminar nodo
void Node::operator delete(void* ptr_node){
    Node *ptr = (Node*) ptr_node;
    cout << "aqui va bien" << endl;
    //Collect->add(&ptr);
    cout << "parece que paso por el collect bien" << endl;
}

//Imprimir el valor
void Node::print(){
    cout << value;
}

