#include <iostream>

#include "List.cpp"

using namespace std;

class Collector{
    public:
        Collector();

        List<float> *memoryList;

        void remove();
        void add(float);
        void print();
        float GetNode();
        bool empty();
};

//Crea la lista de collector
Collector::Collector(){
    memoryList = NULL;
}

//Revisa si el collector esta vacio
bool Collector::empty(){
    if (memoryList->empty()){
        return true;
    } else{
        return false;
    }
}

//Agregar valor de memoria al collector
void Collector::add(float memorySize){
    memoryList->add(memorySize);
    print();
}

//Retornar el valor de memoria
float Collector::GetNode(){
    float node = memoryList->getHead();
    return node;
}

//Elimina una valor de memeoria y del collector
void Collector::remove(){
    memoryList->remove();
    print();
}

//Imprime el collector
void Collector::print(){
    memoryList->print();
}

