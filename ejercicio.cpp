#include <iostream>

using namespace std;

 

class Gato{

public:

int suEdad;

int suPeso;

void Maullar(){

cout << "Miauuuu" ;

}

};

int main(void){

Gato Hinata;

Hinata.suEdad=2;

Hinata.suPeso=2.5;

cout << "El peso de Hinata es: " <<Hinata.suEdad << endl;

cout << "La edad de Hinata es: " <<Hinata.suPeso << endl;

Hinata.Maullar();

}