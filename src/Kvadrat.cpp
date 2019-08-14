#include "Kvadrat.h"
#include "Krug.h"

#include <iostream>
#include <math.h>

using namespace std;

Kvadrat::Kvadrat()
{
    //ctor
}
Kvadrat::Kvadrat(float stranica){
    this->stranica = stranica;
}
Kvadrat::Kvadrat( const Kvadrat &kvadrat){

    kopiranje = new float;
    *kopiranje = *kvadrat.kopiranje;

}

Kvadrat::~Kvadrat()
{
    cout << "Kvadrat je unisten" << endl;

  /* javlja se greska prilikom brisanja iz memorije  */

    // delete kopiranje;
}



void Kvadrat::setStranica(float stranica){
    this->stranica = stranica;
}

float Kvadrat::getStranica() const{
    return stranica;
}

float Kvadrat::povrsinaKvadrata(float stranica){

    return stranica * stranica;

}

float Kvadrat::obimKvadrata(float stranica){

    return 4.0 * stranica;
}

string Kvadrat::gdeSeKrugNalazi(float r){

     if(r == stranica / 2){
        return "Krug se nalazi u kvdartatu ";
     }
     else if(r >=  sqrt((pow(stranica, 2) * 2))/2 ){
        return "Kvadrat se nalazi u krugu";
     }
     else{
        return "Objekti su razvojeni";
     }

}

