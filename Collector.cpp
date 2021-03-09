#include <iostream>
#include "List.cpp"

using namespace std;

class Collector{
    private:
        List<int> *memory_;
    public:
        Collector();
        ~Collector();

        void remove();
        void add(int);
        bool empty();
};

Collector::Collector(){}

//Revisa si el collector esta vacio
bool Collector::empty(){
    if (memory_->num_nodes == 0){
        return true;
    } else{
        return false;
    }
}

//Agregar valor de memoria al collector
void add(int memoryValue){
    memory_.add(memoryValue);
}

//Elimina una valor de memeoria y del collector
void remove(){
    int temp = memory_->ptr_head;
    memory_.remove(ptr_head->value);
    return temp;
}

Collector::~Collector(){}
