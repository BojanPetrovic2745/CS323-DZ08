#include "Krug.h"
#include <math.h>
#include <iostream>
using namespace std;
Krug::Krug()
{
    //ctor
}

Krug::Krug(float r){
    this->r = r;
}

Krug::Krug( const Krug &krug){
    kopiranje = new float;
    *kopiranje = *krug.kopiranje;

}

Krug::~Krug()
{
    cout << "Krug unisten " << endl;
    /* javlja se greska prilikom brisanja iz memorije  */
     // delete kopiranje;
}

void Krug::setPoluprecnik(float r){
    this->r = r;
}

float Krug::getPoluprecnik() const {
    return r;
}

float Krug::povrsinaKruga(float r){
    return pow(r,2) * PI;
}

float Krug::obimKruga(float r){
    return 2 * r * PI;
}


