using namespace std;

template <class T>

class List{
    public:
        List();

        int num_nodes;
        Node *ptr_head;
        
        void add(T);
        Node getHead();
        void remove();
        void remove(T);
        void print();
        bool empty();
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
    Node *new_node = new Node(value_);
    Node *temp = ptr_head;
    if (!ptr_head){
        ptr_head = new_node;
    } else{
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    num_nodes++;
}

//Devuelve dato de cabeza
template <typename T>
Node List<T>::getHead(){
    return *ptr_head;
}

//Eliminar la cabeza
template <typename T>
void List<T>::remove(){
    Node *temp = ptr_head;
    ptr_head = temp->next;
    temp->operator delete(temp);
}

//Eliminar elemento
template <typename T>
void List<T>::remove(T value_){
    Node *temp = ptr_head;
    Node *temp1 = ptr_head->next;
    int found = 0;

    if (ptr_head->value == value_){
        found = 1;
        ptr_head = temp->next;
        temp->operator delete(temp);
    } else{
        int contador = 0;        
        while (temp1->value != value_ && contador < num_nodes){
            temp = temp1;
            temp1 = temp->next;
            contador++;
        }
        if (temp1->value == value_){
            found = 1;
            temp->next = temp1->next;
            temp->operator delete(temp1);
        }
    }
    if (found == 0) {
        cout << "No existe el dato" << endl;
    }
}

//Imprimir lista
template <typename T>
void List<T>::print(){
    Node *temp = ptr_head;
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

//Revisa si la lista esta vacia
template <typename T>
bool List<T>::empty(){
    if (num_nodes == 0){
        return true;
    } else{
        return false;
    }
}

