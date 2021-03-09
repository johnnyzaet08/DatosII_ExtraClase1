#include <iostream>

#include "List.cpp"

using namespace std;

int main(){
    List<int> list_;
    int ele;
    int opcion;

    while (opcion != 4){
    
    cout << "\n1. Agregar elemento \n" << "2. Eliminar elemento \n" << "3. Imprimir lista \n" << "4. Salir \n" << "Ingrese una opcion:  ";
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
        cout << "La lista es:  " << endl;
        list_.print();
    } else{
        return 0;
    }

    }
}
