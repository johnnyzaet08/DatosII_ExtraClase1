#include <iostream>

#include "Node.cpp"
#include "List.cpp"

using namespace std;


class Collector{
    private:
        static Collector *instance;
        List<Node> memoryList;
    
    public:
        static Collector *getInstance(){
            if (instance == NULL){
                instance = new Collector();
            } else{
                return instance;
            }
        }

        void remove();
        void remove_all();
        void add(Node);
        void print();
        Node GetNode();
        bool empty();
    
    protected:
        Collector(){
            cout << "Creando el collector" << endl;
        }
        virtual ~Collector(){

        }
        Collector(Collector const&);
        Collector& operator = (Collector const&);
    
};

Collector *Collector::instance=NULL;

//Revisa si el collector esta vacio
bool Collector::empty(){
    if (memoryList.empty()){
        return true;
    } else{
        return false;
    }
}

//Agregar valor de memoria al collector
void Collector::add(Node memorySize){
    memoryList.add(memorySize);
    print();
}

//Retornar el valor de memoria
Node Collector::GetNode(){
    Node node = memoryList.getHead();
    return node;
}

//Elimina una valor de memeoria y del collector
void Collector::remove(){
	memoryList.remove();
    this->print();
}

//Imprime el collector
void Collector::print(){
    cout << memoryList.ptr_head << endl;
    cout << memoryList.num_nodes << endl;
    memoryList.print();
}

