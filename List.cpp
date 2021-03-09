#include "Node.cpp"

using namespace std;

template <class T>

class List{
    public:
        List();
        ~List();

        int num_nodes;
        Node<T> *ptr_head;
        //Collector<> *collect;
        
        void add(T);
        void remove(T);
        void print();
};

//Constructor
template <typename T>
List<T>::List(){
    num_nodes = 0;
    ptr_head = NULL;
}

//Insertar elemento
template <typename T>
void List<T>::add(T value_){
    //if (collect->empty()){
        Node<T> *new_node = new Node<T>(value_);
        Node<T> *temp = ptr_head;
        if (!ptr_head){
            ptr_head = new_node;
        } else{
            while (temp->next != NULL){
                temp = temp->next;
            }
            temp->next = new_node;
        }
        num_nodes++;
    //} 
    //else{
    //    cout << "aqui va algo porque se agrega jeje" << endl;
    //}
}

//Eliminar elemento
template <typename T>
void List<T>::remove(T value_){
    Node<T> *temp = ptr_head;
    Node<T> *temp1 = ptr_head->next;
    int found = 0;

    if (ptr_head->value == value_){
        ptr_head = temp->next;
        temp->deletee();
    } else{
        while (temp1->value != value_){
            temp = temp1;
            temp1 = temp->next;
        }
        if (temp1->value == value_){
            found = 1;
            temp->next = temp1->next;
            temp1->deletee();
        }
    }
    if (found == 0) {
        cout << "No existe el dato" << endl;
    }
}

//Imprimir lista
template <typename T>
void List<T>::print(){
    Node<T> *temp = ptr_head;
    if(!ptr_head){
        cout << "La Lista esta vacia" << endl;
    } else{
        cout << "[";
        while (temp){
            temp->print();
            cout << ",";
            if (!temp->next){
                cout << "]\n";
            }
            temp = temp->next;
        }
    }
}

template <typename T>
List<T>::~List() {}
