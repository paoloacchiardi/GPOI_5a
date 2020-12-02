#include<iostream>
using namespace std;

class Rettangolo{
    private: //attributi privati
        int base,altezza; 
    public: //metodi pubblici
        Rettangolo();
        Rettangolo(int pBase, int pAltezza);
        ~Rettangolo();
        int area();
        int perimetro();
        void stampaRettangolo();
};

Rettangolo::Rettangolo(){ //costruttore, implementazione metodo
    base = altezza = 0;
}

Rettangolo::Rettangolo(int pBase, int pAltezza){ //costruttore passando i 2 parametri
    base = pBase;
    altezza = pAltezza;
}

Rettangolo::~Rettangolo(){ //per fare l'ondina premo alt e digito 0126, questo metodo cancella la classe, distruttore
    cout << "Oggetto eliminato dalla memoria" << "!" << endl; //endl serve per andare a capo, << serve per concatenare
}

int Rettangolo::area(){ //int perchè ritorna un int
    return base * altezza; 
}

int Rettangolo::perimetro(){
    return (base*2)+(altezza*2);
}

void Rettangolo::stampaRettangolo(){
    cout<<"Base: " << base << " e Altezza: " << altezza << endl; 
}

int main() {
  cout << "Rectangle fest" << endl; //cout = output
  int area,perimetro; //variabili
  Rettangolo Rettangolo1 = Rettangolo();
  area = Rettangolo1.area();
  perimetro = Rettangolo1.perimetro();
  Rettangolo1.stampaRettangolo(); //stampo base e altezza
  cout << "Area: " << area << " Perimetro: " << perimetro << endl;
  Rettangolo1.~Rettangolo(); //distruggo oggetto
  Rettangolo Rettangolo2 = Rettangolo(3,4);
  area = Rettangolo2.area();
  perimetro = Rettangolo2.perimetro();
  cout <<"Area: "<< area << " Perimetro: " << perimetro << endl;
  Rettangolo2.~Rettangolo();
  return 0;
}