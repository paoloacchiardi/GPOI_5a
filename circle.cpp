#include<iostream>
#define _USE_MATH_DEFINES // M_PI = 3.14...
#include <cmath> //pow function
using namespace std;

class Cerchio{
    private:
        float raggio;
    public:
        Cerchio();
        Cerchio(int r);
        ~Cerchio();
        float Area();
        float Perimetro();
        void stampaCerchio();
};

Cerchio::Cerchio(){
    raggio = 1;
}

Cerchio::Cerchio(int r){
    if(r > 0){
        raggio = r;
    }else{
        r = 1;
    }
}

Cerchio::~Cerchio(){
    cout << "\nOggetto eliminato dalla memoria!";
}

float Cerchio::Area(){
    return pow(raggio,2)*M_PI; //pow(variable,value) = variable^value, M_PI = 3.14...
}

float Cerchio::Perimetro(){
    return 2*M_PI*raggio;
}

void Cerchio::stampaCerchio(){
    cout << "Cerchio ->\nRaggio: " << raggio;
}

int main(){
    Cerchio cerchio = Cerchio(4.2);
    float area,perimetro;
    area = cerchio.Area();
    perimetro = cerchio.Perimetro();
    cerchio.stampaCerchio();
    cout << "\nArea: " << area << "\nPerimetro: " << perimetro;
    cerchio.~Cerchio();
    return 0;
}
