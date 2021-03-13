#include <iostream>

#include "Collector.cpp"

using namespace std;

int main(){
    Collector *collect = Collector::getInstance();
    List<int> list_;
    int ele;
    int opcion;

    while (opcion != 5){
    
    cout << "\n1. Agregar elemento \n" << "2. Eliminar elemento \n" << "3. Imprimir lista \n" << "4. Imprime la lista del collector \n" << "5. Salir \n" << "Ingrese una opcion:  ";
    cin >> opcion;

    if (opcion == 1){
        cout << "Ingrese elemento a agregar:  ";
        cin >> ele;
        list_.add(ele);
    } else if (opcion == 2){
        cout << "Ingrese elemento a eliminar:  ";
        cin >> ele;
        list_.remove(ele);
    } else if (opcion == 3){
        cout << "La lista es:  ";
        list_.print();
    } else if (opcion == 4){
        cout << "La lista de memoria disponible es:   ";
        collect->print();
    } else{
        return 0;
    }    }
}
